# 📦 Arduino-Based Warehouse Inventory Robot

An affordable, compact, 4-wheeled robotic system designed to assist small-scale businesses with autonomous **sorting**, **storage**, and **retrieval** of inventory. This project was built during a 2-day hackathon from **April 21st, 11:00 AM to April 22nd, 5:00 PM**, 2025.

---

## 🚀 Project Objective

Manual inventory management is inefficient for small businesses. Existing robotic solutions are too expensive. Our goal was to build a **low-cost robot** using **Arduino** that can:
- Move autonomously
- Detect objects using an ultrasonic sensor
- Sort or respond to item detection via a servo motor

---

## 🔧 Hardware Used

| Component                      | Quantity |
|-------------------------------|----------|
| Arduino Uno                   | 1        |
| L298N Motor Driver Module     | 1        |
| DC Motors                     | 4        |
| Wheels                        | 4        |
| Chassis or Robot Base         | 1        |
| HC-SR04 Ultrasonic Sensor     | 1        |
| Servo Motor (SG90/MG996R)     | 1        |
| Push Button                   | 1        |
| Battery Pack (6–12V)          | 1        |
| Jumper Wires                  | –        |
| Hot Glue/Tape (for mounting)  | –        |

---

## 🔌 Circuit Connections

### 🔋 Power
- **Battery +** → L298N `12V` input
- **Battery -** → Arduino `GND` and L298N `GND`
- L298N `5V` → Servo motor VCC
- L298N `GND` → Servo GND and Arduino GND

### 🧠 Logic
- L298N ENA → Arduino Pin 10
- L298N IN1 → Arduino Pin 9
- L298N IN2 → Arduino Pin 8
- L298N IN3 → Arduino Pin 7
- L298N IN4 → Arduino Pin 6
- L298N ENB → Arduino Pin 5

### 📏 Ultrasonic Sensor
- VCC → Arduino 5V  
- GND → Arduino GND  
- Trig → Arduino Pin 2  
- Echo → Arduino Pin 3  

### 🎛️ Servo Motor
- Signal → Arduino Pin 11  

### 🟢 Push Button
- One side → Arduino Pin 4  
- Other side → Arduino GND  
- Arduino will use `INPUT_PULLUP` mode (no resistor needed)

---

## 🧠 Code Overview

The robot:
- Moves forward
- Stops when an obstacle is detected by the ultrasonic sensor
- Activates the servo for sorting
- Backs up and resumes when the push button is pressed

### 🔄 Control Logic Summary

- Loop constantly checks ultrasonic sensor
- If object is < 15 cm → stop and sort
- If button pressed → back up, sort again, and resume

---

## 🛠️ How to Upload Code

1. Connect Arduino Uno via USB
2. Open Arduino IDE
3. Select `Arduino Uno` from **Tools > Board**
4. Select the correct **COM port** from **Tools > Port**
5. Paste the code into the Arduino editor
6. Click **Upload**

---

## 📚 Credits

- Built by Aabriti Roy during a 2-day hackathon
- Code and design inspired by open-source robotics projects and ChatGPT assistance

---

## 🏁 Final Thoughts

This was my **first hackathon** and **first ever robot**. I learned how to:
- Control motors using Arduino and L298N
- Use an ultrasonic sensor and servo
- Build circuits without soldering
- Plan and execute a full robotics project in 2 days

This is just the beginning!
