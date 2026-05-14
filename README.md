# 🚀 LiftSense

LiftSense is an intelligent wearable assistance system designed to improve safety, accuracy, and operational efficiency during elevator maintenance tasks.

The project was developed to address a major industrial challenge — junior technicians often perform maintenance in high-risk environments where lack of realtime guidance can increase operational errors and training complexity.

LiftSense combines realtime motion sensing, FSM-based sequential gesture interpretation, and wearable feedback mechanisms to create a hands-free industrial guidance system that assists technicians step-by-step during maintenance workflows.

## Why We Built LiftSense

Traditional maintenance workflows heavily depend on experienced technicians for guidance, making training difficult for beginners in high-risk industrial environments.

We identified the need for a system that could:
- guide technicians through structured workflows,
- reduce operational mistakes,
- provide realtime corrective feedback,
- and improve technician confidence during complex maintenance procedures.

LiftSense was designed to function like an intelligent wearable assistant that helps users perform tasks step-by-step with improved accuracy and safety.

## Core Features

### 🧤 Realtime Sequential Motion Detection
Captures and analyzes multi-step hand movements using flex sensors and IMU-based motion tracking.

### ⚙️ FSM-Based Workflow Guidance
Uses Finite State Machine (FSM) logic to validate gesture sequences and guide technicians through structured maintenance workflows.

### 📟 Realtime OLED Guidance
Displays actionable instructions such as:
- “Move Left”
- “Tighten Screw”
- “Retry Step”

to assist technicians during operations.

### 🔔 Corrective Feedback System
Provides vibration and buzzer alerts when incorrect motion sequences are detected.

### 📡 Wireless Monitoring
Supports realtime monitoring and feedback through Arduino IDE serial communication and connected systems.

### 🛠️ Hands-Free Industrial Assistance
Allows technicians to focus on maintenance tasks without constant manual supervision.

## Real-World Workflow

1. The technician performs a maintenance step using the wearable glove.
2. Flex and IMU sensors capture realtime hand movements and orientation.
3. FSM-based logic validates the gesture sequence.
4. The system provides guidance such as:
   - “Move Left”
   - “Tighten Screw”
   - “Retry Step”
5. Incorrect actions trigger vibration and buzzer alerts.
6. Correct completion advances the technician to the next maintenance step.

## Engineering Challenges

### Sensor Calibration
Accurate gesture recognition required careful calibration of flex and IMU sensors to maintain reliable realtime detection.

### Sensor Placement & Wearability
Ensuring proper sensor positioning without affecting glove usability or damaging components was a major hardware design challenge.

### Sequential Gesture Validation
Designing FSM-based logic for multi-step workflow validation required structured state planning and stable transition handling.

### Realtime Responsiveness
Maintaining low-latency feedback during live maintenance workflows was important for practical usability and technician guidance.

This workflow helps junior technicians perform maintenance tasks with improved confidence, accuracy, and reduced dependency on constant supervision.
## 💻 Tech Stack

### Hardware
- Arduino
- Flex Sensors
- IMU Sensor
- OLED Display
- Buzzer Module
- Vibration Feedback System

### Control Logic
- Finite State Machine (FSM)
- Sequential Workflow Validation

### Communication & Monitoring
- Arduino IDE Serial Monitoring
- Wireless Communication

### System Design
- Wearable Human-Machine Interaction
- Realtime Motion Processing

## System Architecture

The LiftSense architecture follows a layered realtime workflow system:

- Sensor Layer captures finger movement and hand orientation using flex and IMU sensors.
- Processing Layer interprets gesture sequences using FSM-based logic.
- Feedback Layer provides OLED guidance, vibration alerts, and buzzer warnings.
- Monitoring Layer enables realtime system tracking through Arduino IDE serial communication.
- Workflow Layer guides technicians step-by-step during maintenance operations.

The architecture was designed to support low-latency interaction, structured guidance, and scalable industrial usability.

<img width="1024" height="1536" alt="ChatGPT Image Mar 23, 2026, 11_34_52 PM" src="https://github.com/user-attachments/assets/7affe527-832b-4de3-a566-4cbb459bae0d" />

## How to Use

Follow these steps to operate the LiftSense system:

1. Connect the smart glove hardware (ESP32 and sensors) and ensure a stable power supply.
2. Enable Bluetooth or Wi-Fi for communication between the glove and the application.
3. Launch the mobile interface to begin monitoring sensor data.
4. Perform hand movements; the system captures and processes motion in real time.
5. The FSM-based control logic interprets gestures and provides structured feedback.

Note: Ensure all sensors are properly calibrated before use for accurate results.

## Intellectual Property

### Published Patent Application

**Title:** FSM-Controlled Smart Glove for Sequential Motion Detection and Analysis  
**Application No:** 202541114254  
**Publication Date:** 16/01/2026

The project is associated with a published patent application focused on realtime wearable gesture interpretation using FSM-based sequential workflow analysis.

## Screenshots

![WhatsApp Image 2026-03-23 at 22 57 40](https://github.com/user-attachments/assets/28e25ae6-2d61-40af-9d29-7d80a1779379)


![IP 1](https://github.com/user-attachments/assets/4a1e7368-03c1-4863-9b8d-f6cdae613eae)


![IP 2](https://github.com/user-attachments/assets/1d26eeb9-57ac-4a01-89ed-91ba2945325d)


![WhatsApp Image 2026-03-23 at 22 57 41](https://github.com/user-attachments/assets/2e736e46-75b2-4a0c-bd16-8b1ca4271868)


## Demo

https://github.com/user-attachments/assets/cef18019-76fb-4e57-a867-01630b38548d

## Impact

- Improves technician safety during elevator maintenance operations
- Reduces training complexity for junior technicians
- Provides realtime corrective guidance during workflows
- Minimizes operational errors through structured sequence validation
- Improves technician confidence in high-risk environments
- Creates a scalable foundation for future industrial assistance systems

## Future Scope

- AI-assisted maintenance guidance
- Adaptive workflow learning based on technician experience
- Smart predictive maintenance integration
- Expanded industrial workflow support
- Cloud-based performance analytics
- Integration with AR/VR industrial training systems

## Team Contribution

LiftSense was developed as a collaborative project involving wearable integration, sensor interfacing, realtime processing, FSM-based workflow logic, and industrial usability research.

My contributions included:
- workflow ideation and maintenance guidance concepts,
- realtime sequential workflow thinking,
- practical usability analysis,
- wearable integration support,
- engineering problem-solving,
- and system workflow planning.

## About Me

I’m an Electronics and Communication Engineering student interested in building intelligent wearable and realtime systems that improve safety, usability, and industrial efficiency.

My interests include embedded systems, wearable computing, human-machine interaction, IoT, and AI-assisted industrial technologies.

I enjoy solving practical engineering problems by combining structured system thinking with user-focused design and realtime interaction.

🔗 LinkedIn: https://www.linkedin.com/in/alagappanarumugam









