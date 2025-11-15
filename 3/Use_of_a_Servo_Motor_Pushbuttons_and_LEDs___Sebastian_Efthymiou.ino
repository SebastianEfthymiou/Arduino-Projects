#include<Servo.h>
int push1 = 2;
int push2 = 3;
int RED = 7;
int GREEN = 6;

int read;
Servo Servo;
void setup()
{
myservo.attach(9);
pinMode(push1, INPUT);
pinMode(push2,INPUT);
pinMode(RED,OUTPUT);
pinMode(GREEN,OUTPUT);
}
void loop()
{
read = digitalRead(push1);
if(read == HIGH) {
Servo.write(180);
digitalWrite(RED,HIGH);
delay(1000); 
digitalWrite(GREEN,LOW);
}
else {
digitalWrite(GREEN,LOW);
Servo.write(0); 
digitalWrite(RED,LOW);
}
read = digitalRead(push2);
if(reading1 == HIGH) {
Servo.write(90);
digitalWrite(GREEN,HIGH);
delay(1000);
digitalWrite(RED,LOW);
}
else {
digitalWrite(GREEN,LOW);
Servo.write(0); 
digitalWrite(RED,LOW);
}
}

