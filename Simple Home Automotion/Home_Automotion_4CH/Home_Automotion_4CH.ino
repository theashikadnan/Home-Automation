#include <SoftwareSerial.h>
#define Light1 13  // defines relay pins numbers  
#define Light2 12
#define Light3 11  // defines relay pins numbers  
#define Light4 10

char t;

void setup() {

Serial.begin(9600);
pinMode(Light1, OUTPUT);
pinMode(Light2, OUTPUT);
pinMode(Light3, OUTPUT);
pinMode(Light4, OUTPUT);
}

void loop() {


if(Serial.available()){
  t = Serial.read();
  Serial.println(t);
}

if(t == '1'){ 
  digitalWrite(13,HIGH);
}

else if(t == 'A'){     
  digitalWrite(13,LOW);
}
 
else if(t == '2'){     
  digitalWrite(12,HIGH);
}

else if(t == 'B'){    
  digitalWrite(12,LOW);
}

if(t == '3'){ 
  digitalWrite(11,HIGH);
}

else if(t == 'C'){     
  digitalWrite(11,LOW);
}
 
else if(t == '4'){     
  digitalWrite(10,HIGH);
}

else if(t == 'D'){    
  digitalWrite(10,LOW);
}

}
