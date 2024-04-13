# Safety Radar Design using Arduino and Processing Software

## Overview

This repository contains the design and implementation of a Safety Radar system using Arduino and Processing software. The Safety Radar system utilizes components such as a servo motor, Arduino board, and an ultrasonic sensor to detect and monitor objects within a specified range.

## Contents

1. Arduino Code
2. Processing Code
3. Circuit Diagram
4. Components List
5. README.md (this file)

## Design Process

### 1. Component Selection

- **Arduino**: Chosen as the main microcontroller to control the system and process sensor data.
- **Servo Motor**: Used to rotate the ultrasonic sensor to cover a wider detection area.
- **Ultrasonic Sensor**: Employed to measure the distance to objects and detect obstacles.
  
### 2. Circuit Design

- Designed a circuit diagram to illustrate the connections between the components.
- Ensured proper wiring and connections to facilitate communication between Arduino, servo motor, and ultrasonic sensor.

### 3. Arduino Programming

- Developed Arduino code to read data from the ultrasonic sensor and control the servo motor accordingly.
- Implemented logic to calculate distances and determine the presence of objects within the detection range.

### 4. Processing Software

- Created a Processing sketch to visualize the radar display based on the data received from Arduino.
- Displayed objects detected by the ultrasonic sensor on the radar screen, providing a visual representation of the detection area.

### 5. Testing and Validation

- Conducted tests to validate the functionality of the Safety Radar system.
- Checked for accurate object detection and smooth servo motor rotation.

## Simulation Results

The Safety Radar system successfully detects and displays objects within the specified range, with the servo motor rotating the ultrasonic sensor to cover a wider detection area. The Processing software provides a real-time radar display, enhancing the user's ability to monitor the surroundings effectively.

## Repository Structure

- **Arduino_Code/**: Contains the Arduino code for the Safety Radar system.
- **Processing_Code/**: Contains the Processing sketch for visualizing the radar display.
- **Circuit_Diagram/**: Contains the circuit diagram illustrating the connections between components.
- **Components_List.md**: Detailed list of components used in the Safety Radar system.
- **README.md**: Overview and instructions for using the repository (this file).

## How to Use

1. Clone the repository to your local machine:

2. Navigate to the respective directories (Arduino_Code, Processing_Code, Circuit_Diagram) to view the code and design files.

3. Upload the Arduino code to your Arduino board using the Arduino IDE.

4. Run the Processing sketch to visualize the radar display on your computer.

5. Follow the circuit diagram to wire the components correctly and ensure proper connections.

##Pictures
![Screenshot (286)](https://github.com/ugandhar-sist/Safety-radar/assets/137391299/b93622ae-3ccb-4ee8-97ce-c5490fb3eeb0)


![20231012_113647](https://github.com/ugandhar-sist/Safety-radar/assets/137391299/3d38e376-0692-4138-b48d-c204870697aa)


![1713011228150](https://github.com/ugandhar-sist/Safety-radar/assets/137391299/1a1d596e-0ed1-4dcb-a0d5-7e40d13adf18)



## Conclusion

This project showcases the design and implementation of a Safety Radar system using Arduino and Processing software. By utilizing a servo motor, ultrasonic sensor, and Arduino board, the system effectively detects and displays objects within a specified range, enhancing safety and awareness in various applications.

Feel free to explore, modify, and use the files in this repository for your projects. If you have any questions or suggestions, please open an issue or pull request.
