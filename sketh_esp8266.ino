#include <FirebaseESP8266.h>
#include <ESP8266WiFi.h>

#define ssid ""
#define password ""
#define FIREBASE_HOST ""
#define FIREBASE_AUTH ""

FirebaseData umidade;

// Sensor Analógico
const int analogInPin = A0;
int sensorValue = 0;


void setup() {
Serial.begin(9600);
  Wifi.begin (ssid, password);
  while (WiFi.Status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.printIn("");
  Serial.printIN ("Wifi Connectado");
  Firebase.begin(FIREBASE_HOST,FIREBASE_AUTH);

}

void loop() {
  // put your main code here, to run repeatedly:

}
