# esp32_dht11_ldr_monitor

ESP32 Environment Monitoring System (IoT Project)

## Overview

This project is an IoT-based Environment Monitoring System using ESP32. It reads real-time data from a DHT11 sensor (temperature and humidity) and an LDR sensor (light intensity). The data is displayed on the Serial Monitor for monitoring environmental conditions.

## Features

Temperature monitoring (°C)
Humidity monitoring (%)
Light intensity detection (LDR)
Real-time sensor data output
Error handling for sensor failure
Simple and efficient design

## Technologies Used

ESP32 (Arduino IDE)
DHT11 Sensor
LDR (Light Dependent Resistor)
Analog input
Embedded C++

## Project Structure

esp32-environment-monitor/
│
├── main.ino
└── README.md

## How to Run

install Arduino IDE
Install ESP32 board support
Install DHT sensor library
Connect DHT11 to GPIO 4
Connect LDR to GPIO 34
Upload code to ESP32

## How It Works

ESP32 reads analog value from LDR sensor

DHT11 sensor provides:
Temperature (in °C)
Humidity (in %)

System checks for sensor errors using isnan()

If data is valid:
Values are printed to Serial Monitor

Output format:
Light: value | Temp: value °C | Hum: value %

Data updates every 2 seconds

## Future Improvements

Add OLED/LCD display
Send data to cloud (IoT dashboard)
Add data logging system
Integrate with mobile application
Add alert system for extreme conditions
Combine with automation (fan/light control)

## Author

Harsha G
Learning Python | Embedded Systems | IoT
