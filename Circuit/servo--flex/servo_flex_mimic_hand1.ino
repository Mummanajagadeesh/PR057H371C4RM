#include <Servo.h>

Servo s1;

void setup()
{
  s1.attach(0);
  
  pinMode(A0,INPUT);
  
}
  

void loop()
{
  
  float val1=analogRead(A0);

  
  val1=map(val1,990,1017,0,180);

  
  val1=constrain(val1,0,180);

  
  s1.write(val1);

  
  //Serial.println(val1);
  delay(15);
  
}