#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BMP085_U.h>
#include <Adafruit_MPU6050.h>

// Create sensor instances
Adafruit_BMP085_Unified bmp = Adafruit_BMP085_Unified(10085);
Adafruit_MPU6050 mpu;

// Buzzer pin
#define BUZZER_PIN 8

String currentPoint = "";
String previousPoint = "";

// Helper: check if a value is in range
bool inRange(float val, float minVal, float maxVal) {
  return (val >= minVal && val <= maxVal);
}

void setup() {
  Serial.begin(9600);
  while (!Serial);

  Serial.println("BMP180 + MPU6050 (Accel X-based point detection)");

  pinMode(BUZZER_PIN, OUTPUT);
  digitalWrite(BUZZER_PIN, LOW);

  // Initialize BMP180
  if (!bmp.begin()) {
    Serial.println("BMP180 not detected. Check wiring!");
  } else {
    Serial.println("BMP180 detected!");
  }

  // Initialize MPU6050
  if (!mpu.begin()) {
    Serial.println("MPU6050 not detected. Check wiring!");
  } else {
    Serial.println("MPU6050 detected!");
  }

  delay(1000);
}

void loop() {
  // --- BMP180 Readings ---
  sensors_event_t event;
  bmp.getEvent(&event);

  if (event.pressure) {
    Serial.print("Pressure: ");
    Serial.print(event.pressure);
    Serial.print(" hPa | ");

    float altitude = bmp.pressureToAltitude(1013.25, event.pressure);
    Serial.print("Altitude: ");
    Serial.print(altitude);
    Serial.println(" m");

    // --- Buzzer control for pressure > 1015 ---
    if (event.pressure > 1015.0) {
      digitalWrite(BUZZER_PIN, HIGH);
      Serial.println("🚨 Pressure High! Buzzer ON");
    } else {
      digitalWrite(BUZZER_PIN, LOW);
    }
  }

  // --- MPU6050 Readings ---
  sensors_event_t accel, gyro, temp;
  mpu.getEvent(&accel, &gyro, &temp);

  float ax = accel.acceleration.x;
  float ay = accel.acceleration.y;
  float az = accel.acceleration.z;

  Serial.print("Accel (m/s²) X: ");
  Serial.print(ax);
  Serial.print(" | Y: ");
  Serial.print(ay);
  Serial.print(" | Z: ");
  Serial.println(az);

  // --- Detect points using only accel X ---
  if (inRange(ax, -2.20, -2.10)) currentPoint = "A";
  else if (inRange(ax, -1.75, -1.85)) currentPoint = "D";
  else if (inRange(ax, -2.50, -2.40)) currentPoint = "C";
  else if (inRange(ax, -2.85, -2.75)) currentPoint = "B";
  else currentPoint = "Unknown";

  Serial.print("Detected Point: ");
  Serial.println(currentPoint);

  // --- Handle Unknown Position ---
  if (currentPoint == "Unknown") {
    Serial.println("⚠ Correct your position!");
  }

  // --- Transition Logic ---
  if (previousPoint != currentPoint && currentPoint != "Unknown") {
    Serial.print("Transition: ");
    Serial.print(previousPoint);
    Serial.print(" -> ");
    Serial.println(currentPoint);

    bool valid = false;

    // Valid path: A → D → C → B
    if ((previousPoint == "A" && currentPoint == "D") ||
        (previousPoint == "D" && currentPoint == "C") ||
        (previousPoint == "C" && currentPoint == "B")) {
      valid = true;
      Serial.println("✅ Valid sequence step");
    }

    if (!valid && previousPoint != "") {
      Serial.println("❌ Wrong sequence!");
    }

    previousPoint = currentPoint;
  }

  Serial.println("--------------------------------------");
  delay(1000);
}
