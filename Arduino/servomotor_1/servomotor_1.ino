#include <Servo.h>

Servo servo1;
int PINSERVO = 2;
int PULSOMIN = 700;
int PULSOMAX = 2350;
int VALORPOT;
int ANGULO;
int POT = 0;

void setup() {
  servo1.attach(PINSERVO, PULSOMIN, PULSOMAX);
  // put your setup code here, to run once:

}

void loop() {
  VALORPOT = analogRead(POT);
  ANGULO = map (VALORPOT, 0, 1023, 0, 180);
  servo1.write(ANGULO);
  delay(20);
  // put your main code here, to run repeatedly:

}
