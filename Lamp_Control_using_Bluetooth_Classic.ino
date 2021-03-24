#include "BluetoothSerial.h"
#if !defined(CONFIG_BT_ENABLED) || !defined(CONFIG_BLUEDROID_ENABLED)
#error Bluetooth is not enabled! Please run `make menuconfig` to and enable it
#endif

BluetoothSerial SerialBT;
const int relay = 13;
String message = "";
char incomingChar;

void setup() {
  pinMode(relay, OUTPUT);
  digitalWrite(relay, HIGH);
  Serial.begin(115200);
  SerialBT.begin("Lampskuy"); //Bluetooth device name
  Serial.println("The device started, now you can pair it with bluetooth!");
}

void loop() {
  if (SerialBT.available()){
    char incomingChar = SerialBT.read();
    if (incomingChar != '\n'){
      message += String(incomingChar);
    }
    else{
      message = "";
    }
    Serial.write(incomingChar);  
  }
  // Check received message and control output for relay
  if (message =="on"){
    digitalWrite(relay, LOW);
  }
  else if (message =="off"){
    digitalWrite(relay, HIGH);
  }
  delay(20);
}
