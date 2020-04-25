#include<Servo.h>
double x,z,c,v,b;
Servo servo;
int angle = 10;
void setup(){
  pinMode(A0,INPUT);
   servo.attach(8);
  servo.write(angle);
  }

void loop(){
  x=analogRead(A0);
  z=analogRead(A0);
  v=analogRead(A0);
  c=analogRead(A0);
  b=analogRead(A0);
  x=(z+x+c+v+b)/5;
 if(x>30.00)
  {
    servo.write(130);                          
    delay(300);       
    servo.write(170);           
    delay(200); 
  }

}

  
