/*


#include <Arduino.h>

#define  L1 23
#define  L2 19
#define  L3 18
#define  L4 5
#define  L5 17
#define  L6 16
#define  L7 4
#define  L8 0
#define Input 36

void setup(){
  pinMode(L1,OUTPUT);
  pinMode(L2,OUTPUT);
  pinMode(L3,OUTPUT);
  pinMode(L4,OUTPUT);
  pinMode(L5,OUTPUT);
  pinMode(L6,OUTPUT);
  pinMode(L7,OUTPUT);
  pinMode(L8,OUTPUT);
  pinMode(Input,INPUT); 
  }
  
void loop (){
 int sensorValue = analogRead(Input);
 
 if (sensorValue <= 500){
  digitalWrite(L1,HIGH);
  digitalWrite(L2,LOW);
  digitalWrite(L3,LOW);
  digitalWrite(L4,LOW);
  digitalWrite(L5,LOW);
  digitalWrite(L6,LOW);
  digitalWrite(L7,LOW);
  digitalWrite(L8,LOW);

 } else if(sensorValue <= 1000) {
 digitalWrite(L1,HIGH);
 digitalWrite(L2,HIGH);
 digitalWrite(L3,HIGH);
 digitalWrite(L4,LOW);
 digitalWrite(L5,LOW);
 digitalWrite(L6,LOW);
 digitalWrite(L7,LOW);
 digitalWrite(L8,LOW);

 } else if (sensorValue <= 2000){
 digitalWrite(L1,HIGH);
 digitalWrite(L2,HIGH);
 digitalWrite(L3,HIGH);
 digitalWrite(L4,HIGH);
 digitalWrite(L5,HIGH);
 digitalWrite(L6,LOW);
 digitalWrite(L7,LOW);
 digitalWrite(L8,LOW);
 
  } else {
 digitalWrite(L1,HIGH);
 digitalWrite(L2,HIGH);
 digitalWrite(L3,HIGH);
 digitalWrite(L4,HIGH);
 digitalWrite(L5,HIGH);
 digitalWrite(L6,HIGH);
 digitalWrite(L7,HIGH);
 digitalWrite(L8,HIGH);
  
 }
 
}
*/