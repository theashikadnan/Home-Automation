#include <SoftwareSerial.h>
#define Light1 2  // defines relay pins numbers  
#define Light2 3

#define ldr A0

void setup() {

Serial.begin(9600);

pinMode(Light1, OUTPUT);
pinMode(Light2, OUTPUT);
pinMode(ldr, INPUT);

}

void loop() {


int ldrVal = analogRead(ldr);
Serial.println(ldrVal);

if (ldrVal <= 1015) {

digitalWrite(Light1, HIGH);
digitalWrite(Light2, HIGH);

} 


else if (ldrVal >= 50) {

digitalWrite(Light1, LOW);
digitalWrite(Light2, LOW);

}

delay(1000);

}
