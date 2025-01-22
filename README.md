# Automatic Plant Watering System 🌱

This project is an **Automatic Plant Watering System** designed to monitor soil moisture levels and activate a water pump when the soil is too dry. The system uses an Arduino board, a soil moisture sensor, and a relay module to control the water pump. It ensures your plants stay hydrated even when you're away.

---

## 📝 Project Description

The Automatic Plant Watering System helps maintain the health of your plants by:
- Monitoring the soil moisture level using a soil moisture sensor.
- Activating a water pump when the soil is dry.
- Deactivating the water pump once optimal moisture levels are reached.
- Providing real-time data through the Arduino serial monitor for diagnostics and status updates.

  ---

## 📂 Project Files

- **`code.ino`**: The Arduino code for the project.
- **`circuit.jpg`**: The circuit diagram illustrating the connections.

---

## 🔧 Materials Required

1. **Hardware Components**:
   - Arduino Uno (or compatible board)
   - Soil Moisture Sensor
   - Relay Module
   - 5V Water Pump
   - Power Supply (for Arduino and pump)
   - Connecting Wires
   - Breadboard (optional)
   
2. **Software**:
   - Arduino IDE (for uploading code)

3. **Additional**:
   - A potted plant or garden to test the system.

---

## 🛠️ Circuit Connections

Refer to **`circuit.jpg`** for detailed connections. Here's a quick summary:
- **Soil Moisture Sensor**: Connect to analog pin `A0` on the Arduino.
- **Relay Module**: Connect to digital pin `3` for controlling the pump.
- **Pump**: Connected to the relay module.
- Power the Arduino using USB or an external 9V battery.

---

## 🚀 How to Use

1. **Assemble the Circuit**:
   - Follow the connections shown in `circuit.jpg`.
   - Ensure all components are securely connected.

2. **Upload the Code**:
   - Open `code.ino` in the Arduino IDE.
   - Select the appropriate board and port from the "Tools" menu.
   - Click **Upload** to flash the code onto the Arduino.

3. **Test the System**:
   - Place the soil moisture sensor in the soil.
   - Power the system and monitor the serial output for moisture readings.
   - Watch the pump activate and deactivate based on the soil's moisture level.

---

## 🔮 Future Developments

Here are some ideas to improve and expand the system:
- **IoT Integration**: Connect the system to Wi-Fi and monitor/control it remotely via a smartphone app.
- **Battery Management**: Add a solar-powered battery system for energy efficiency.
- **Multi-Zone Support**: Extend the system to manage multiple plants with individual moisture thresholds.
- **Custom Alerts**: Integrate an alert system (e.g., SMS, email) for low water levels or pump issues.
- **Weather Data Integration**: Incorporate local weather data to optimize watering schedules.


Hope you like it, Shri Harivansh
