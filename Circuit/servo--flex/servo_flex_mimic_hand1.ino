#include <Servo.h>

Servo s1;
Servo s2;
Servo s3;
Servo s4;
Servo s5;

void setup()
{
  s1.attach(0);
  s2.attach(1);
  s3.attach(2);
  s4.attach(3);
  s5.attach(4);
  
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  pinMode(A2,INPUT);
  pinMode(A3,INPUT);
  pinMode(A4,INPUT);
  
}
  

void loop()
{
  
  float val1=analogRead(A0);
  float val2=analogRead(A1);
  float val3=analogRead(A2);
  float val4=analogRead(A3);
  float val5=analogRead(A4);
  
  val1=map(val1,990,1017,0,180);
  val2=map(val2,990,1017,0,180);
  val3=map(val3,990,1017,0,180);
  val4=map(val4,990,1017,0,180);
  val5=map(val5,990,1017,0,180);
  
  val1=constrain(val1,0,180);
  val2=constrain(val2,0,180);
  val3=constrain(val3,0,180);
  val4=constrain(val4,0,180);
  val5=constrain(val5,0,180);
  
  s1.write(val1);
  s2.write(val2);
  s3.write(val3);
  s4.write(val4);
  s5.write(val5);
  
  //Serial.println(val1);
  delay(15);
  
}
