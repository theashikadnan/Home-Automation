#include <SoftwareSerial.h>
#include <DS3231.h>

#define Light 13

DS3231  rtc(SDA, SCL);
Time t;

const int LightOnHour = 18;
const int LightOffHour = 6;

//const int LightOnMin = 40;
//const int LightOffMin = 37;

void setup() {
  Serial.begin(9600);
  rtc.begin();
  pinMode(Light, OUTPUT);
  
}

void loop() {
  digitalWrite(7,HIGH);
  t = rtc.getTime();
  Serial.print(t.hour);
  Serial.print(" hour(s), ");
  Serial.print(t.min);
  Serial.print(" minute(s)");
  Serial.println(" ");
  
  if(t.hour >= LightOnHour || t.hour < LightOffHour){
    
    digitalWrite(Light,LOW);
    Serial.println("LIGHT ON");
    
  }
    
    else if(t.hour >= LightOffHour){
      
      digitalWrite(Light,HIGH);
      Serial.println("LIGHT OFF");
    
    }

  delay (1000);
}
