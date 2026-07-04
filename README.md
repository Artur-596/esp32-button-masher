# esp32-button-masher
An embedded systems project featuring a high-speed button-mashing game built on the ESP32. Demonstrates hardware debouncing, real-time input handling, user score decay, and state management.

Took a good 7 hours as it was my first real hardware related project.
My code is still messy so i'm sure others trying to recreate this might do a better job doing so, however i've still left my code in this repo which includes the arduino ide file (.ino) and raw c++ file (.cpp).

## Components Used: 
  - breadboard
  - esp32
  - jumper wires
  - small button
  - 220 and 320 ohm resistors
  - red, blue, and green LEDs
    
esp32 - [amazon](https://www.amazon.co.uk/Diymore-ESP32-WROOM-32-Microcontroller-Bluetooth-Development/dp/B0DGLCWR76/ref=sr_1_7?sr=8-7)

component kit - [amazon](https://www.amazon.co.uk/Miuzei-Breadboard-Compatible-Resistance-Electronics/dp/B0BJF6TZJX/ref=sr_1_6?sr=8-6)

## Hardware Mapping
| Component | ESP32 GPIO Pin | Resistor |
| :--- | :--- | :--- |
| **Button** | GPIO 4 (Example) | Internal Pull-up / None |
| **Red LED** | GPIO 12 (Example) | 220 Ω |
| **Blue LED** | GPIO 14 (Example) | 320 Ω |
| **Green LED** | GPIO 27 (Example) | 220 Ω |

## Resources Used/Created
  - Wokwi project used to plan: https://wokwi.com/projects/468654708660502529
  - Site I used to learn how to use a breadboard: * [Science Buddies: How to Use a Breadboard](https://www.sciencebuddies.org/science-fair-projects/references/how-to-use-a-breadboard)

## Recorded example
https://github.com/user-attachments/assets/5d55ef65-1f3b-4523-89b3-fef1ec5d7aeb




