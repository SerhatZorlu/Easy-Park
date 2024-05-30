// Code generated by Arduino IoT Cloud, DO NOT EDIT.

#include <ArduinoIoTCloud.h>
#include <Arduino_ConnectionHandler.h>

const char DEVICE_LOGIN_NAME[]  = "0041afa7-bb70-4374-bc37-6b1e03f2a5e6";

const char SSID[]               = SECRET_SSID;    // Network SSID (name)
const char PASS[]               = SECRET_OPTIONAL_PASS;    // Network password (use for WPA, or use as key for WEP)
const char DEVICE_KEY[]  = SECRET_DEVICE_KEY;    // Secret device password

void onParkSlot1TimeChange();
void onParkSlot2TimeChange();
void onParkSlot1Change();
void onParkSlot2Change();

int parkSlot1Time;
int parkSlot2Time;
bool parkSlot1;
bool parkSlot2;

void initProperties(){

  ArduinoCloud.setBoardId(DEVICE_LOGIN_NAME);
  ArduinoCloud.setSecretDeviceKey(DEVICE_KEY);
  ArduinoCloud.addProperty(parkSlot1Time, READWRITE, ON_CHANGE, onParkSlot1TimeChange);
  ArduinoCloud.addProperty(parkSlot2Time, READWRITE, ON_CHANGE, onParkSlot2TimeChange);
  ArduinoCloud.addProperty(parkSlot1, READWRITE, ON_CHANGE, onParkSlot1Change);
  ArduinoCloud.addProperty(parkSlot2, READWRITE, ON_CHANGE, onParkSlot2Change);

}

WiFiConnectionHandler ArduinoIoTPreferredConnection(SSID, PASS);
