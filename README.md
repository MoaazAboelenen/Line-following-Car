# Line-following-Car
🛤️ Line Following Car using Arduino
This project demonstrates an autonomous line following robot car built with Arduino, capable of detecting and following a black line on a white surface using infrared (IR) sensors. It’s a great beginner-to-intermediate robotics project that introduces the basics of sensor feedback and motor control.

🚗 Features
Automatically detects and follows a line path (black on white or vice versa)

Supports 2-sensor and 3-sensor IR configurations

Adjustable sensitivity and motor speed for better path tracking

Real-time decision-making to turn left, right, or go straight

🧰 Components Used
Arduino Uno or Nano

L298N Motor Driver Module

2 or 4 DC Gear Motors + Wheels

IR Sensor Module (2 or 3 channel)

Robot Car Chassis

Battery Pack (Li-ion or 9V x2)

Jumper wires and breadboard (optional)

⚙️ How It Works
IR Sensors: Detect contrast between black line and white surface.

Signal Processing: The Arduino reads sensor data and determines the position of the line.

Motor Control: Based on sensor input, it adjusts the direction:

Center sensor active → Move forward

Left sensor active → Turn left

Right sensor active → Turn right

No sensors active → Stop or reverse slightly
