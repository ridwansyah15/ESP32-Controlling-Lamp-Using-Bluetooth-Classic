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
* Go to **boards manager**, search and download **esp32 by Espressif Systems**.
* Go to **tools** menu and choose your board. In this project I use NodeMCU ESP-32S so I choose **NodeMCU-32S** in the board option.
* Set the right port for your board.
* Then you ready to code.

## Project Schematic and Implementation
### Schematic
<p align="center">
 <img width="612" alt="skematik" src="https://user-images.githubusercontent.com/74285906/112386678-d614ef00-8d23-11eb-91e2-4812604ad7ac.png">
</p>

### Implementation
<p align="center">
 <img src="https://user-images.githubusercontent.com/74285906/112370361-dc996b80-8d0f-11eb-8b57-e653c542bab3.jpeg" alt="drawing" width="250"/>
 <img src="https://user-images.githubusercontent.com/74285906/112372332-3ef36b80-8d12-11eb-8c86-324278e4e1ff.jpeg" alt="drawing" width="250"/>
 <img src="https://user-images.githubusercontent.com/74285906/112372356-4450b600-8d12-11eb-8a6d-413353419d4d.jpeg" alt="drawing" width="250"/>
</p>

## Reference
Check out to my reference for this project:
[Rui Santos](https://www.youtube.com/watch?v=RStncO3zb8g)
