# ESP32-Controlling Lamp Using Bluetooth Classic
In this project, I am using NodeMCU ESP-32 to control lamp via bluetooth classic. In this case, I am using serial communication from my phone/PC as a client to ESP-32 as a server.

## Preparation
### Components
Here are a few things that you have to prepare for this project:
* NodeMCU ESP-32/32S
* Relay module (Active Low)
* DC adapter
* Serial Bluetooth Terminal
  * [Android](https://play.google.com/store/apps/details?id=de.kai_morich.serial_bluetooth_terminal&hl=en&gl=US)
  * [Windows](https://www.microsoft.com/en-us/p/bluetooth-serial-terminal/9wzdncrdfst8?activetab=pivot:overviewtab)

### Arduino IDE
Follow this step on your Arduino IDE:
* Copy and paste this link to your Arduino IDE preference: https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json.
* Go to the boards manager, search and download **esp32 by Espressif Systems**.
* Go to tools menu and choose your board. In my project I use NodeMCU ESP-32S so I choose **NodeMCU-32S** in the board option.
* Then you ready to code.

## Project Schematic

## Reference
Check out to my reference for this project:
[Rui Santos](https://www.youtube.com/watch?v=RStncO3zb8g)
