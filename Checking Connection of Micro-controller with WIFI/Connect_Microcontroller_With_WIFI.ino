#define LED D7


#include <ESP8266WiFi.h>

char ssid[]           = "bilal";      
const char* password  = "12345bilal"; 



void setup() {
  
  pinMode(LED,OUTPUT);
  delay(500);
  digitalWrite(LED,LOW);

  Serial.begin(9600);
  Serial.println();
  Serial.print("Wifi connecting to ");
  Serial.print( ssid );

  WiFi.begin(ssid,password);

  Serial.println();
  Serial.print("Connecting");

  while( WiFi.status() != WL_CONNECTED ){
      delay(100);
      Serial.print(".");        
  }

  digitalWrite( LED , HIGH);
  Serial.println();

  Serial.println("Wifi Connected Success!");
  Serial.print("NodeMCU IP Address : ");
  Serial.println(WiFi.localIP() );

}

void loop() {
  // put your main code here, to run repeatedly:

}
