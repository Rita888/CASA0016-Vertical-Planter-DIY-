
#include <SPI.h> // prefabricated programmes/software for arduino to connect to wifi
#include <WiFiNINA.h> //prefabricated pragrammes/sotfware for arduino to connect to wifi

const int RELAY_PIN = A5;  // the Arduino pin, which connects to the IN pin of relay
const int AirValue = 907;   //the highest value that the soil moisture sensor can record being outside of the soil (air only)
const int WaterValue = 731;  //the highest value that the soil moisture sensor can record being submerged in the water (100 water - therefore the soil is waterlogged)
int soilMoistureValue = 0; //variable to start soil moisture measurements which will determine if the content of moisture in the soil
int thresholdValue = 855;//between 907 and 855 soil is dry and will activate water pump. if below 855 the soil has enough moisture and no need to activate water pump
int watertime = 2; //water for two seconds only - the soil needs time to absorb the water therefore no need to waste water by flooding the soil.
int waittime = 6; //wait for six seconds - this is needed for soil to absord the water and the soil moisture to adjust the measurement.
int ledpin = 5; // initialize pin 5 to activate the water pump
int inpin = 7; // initialize pin 7 for water contact sensor
int Water_low;// define val either 1 (in contact) 0 (no water contact)

#include "arduino_secrets.h"
///////please enter your sensitive data in the Secret tab/arduino_secrets.h
char ssid[] = SECRET_SSID;        // your network SSID (name)
char pass[] = SECRET_PASS;    // your network password (use for WPA, or use as key for WEP)
int status = WL_IDLE_STATUS;     // the WiFi radio's status

void runPump();
void printWifiData();

void setup() {
  Serial.begin(9600); // open serial port, set the baud rate to 9600 bps

  // set up wifi
  // check for the WiFi module:
  if (WiFi.status() == WL_NO_MODULE) {
    Serial.println("Communication with WiFi module failed!");
    // don't continue
    while (true);
  }
  // attempt to connect to WiFi network:
  while (status != WL_CONNECTED) {
    Serial.print("Attempting to connect to WPA SSID: ");
    Serial.println(ssid);
    // Connect to WPA/WPA2 network:
    status = WiFi.begin(ssid, pass);

    // wait 10 seconds for connection:
    delay(10000);
  }

  // you're connected now, so print out the data:
  Serial.print("You're connected to the network");
  Serial.println();
}


void loop() {
  // check the network connection once every 10 seconds:
  delay(10000);

  {
    soilMoistureValue = analogRead(A0);
  }
  //put Sensor insert into soil to read the moisture
  if (soilMoistureValue > thresholdValue) {
    runPump();
  }
  else if (soilMoistureValue < thresholdValue) {
    Serial.println("pump is off");
    delay(waittime * 1000); //60 seconds
  }
  delay(500);
  Serial.println(soilMoistureValue);
  //read water level
  Water_low = digitalRead(inpin); // read the level value of pin 7 and assign if to val
  Serial.println(Water_low); // print the data from the sensor
  //check for water level action
  if (Water_low == 0) {
    Serial.println("water alarm"); //once the water level drops below this measure then the alarm activates to send an email the need to top-up
  }
}
  void printWifiData() {
    // print your board's IP address:
    IPAddress ip = WiFi.localIP();
    Serial.print("IP Address: ");
    Serial.println(ip);
    Serial.println(ip);
  }

  //function for running the pump
  void runPump() {
    Serial.println("Running Pump");
    digitalWrite(RELAY_PIN, HIGH);
    delay(watertime * 1000); // turn on pump 2 second
    digitalWrite(RELAY_PIN, LOW);
    }
