#include "Servo.h"

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
int POT = 0;
//int SERVO = 6;
int valorPot;
int valorMotor = 0;

void setup()
{
  servo1.attach(3);
  servo2.attach(5);
  servo3.attach(6);
  servo4.attach(9);
  servo5.attach(10);
  Serial.begin(9600);
}

void loop()
{
	valorPot = analogRead(POT);
  	valorMotor = map(valorPot,0,1023,0,180);
  	servo1.write (valorMotor);
    servo2.write (valorMotor);
  	servo3.write (valorMotor);
  	servo4.write (valorMotor);
  	servo5.write (valorMotor);

  	Serial.print (valorMotor);
  	delay (20);
}