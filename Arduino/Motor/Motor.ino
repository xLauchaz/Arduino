
#include <AFMotor.h>
// distancia 1000mm

AF_DCMotor motor1(1, MOTOR34_64KHZ);

AF_DCMotor motor2 (2, MOTOR34_64KHZ);

//DEFINE EL PUERTO 3
//CON UNA FRECUENCIA DE 64KHZ PWM

void setup() {
  motor1.setSpeed(200);
  // VELOCIDAD DEL MOTOR

  motor2.setSpeed(200);

}
void loop() {
  //AVANZA
  motor1.run(BACKWARD);
  motor2.run(FORWARD);
  delay(3000);
  //SE DETIENE
  motor1.run(RELEASE);
  motor2.run(RELEASE);
  delay(1000);
  //RETROCEDE
  motor1.run(FORWARD);
  motor2.run(BACKWARD);
  delay(3000);
  //SE DETIENE
  motor1.run(RELEASE);
  motor2.run(RELEASE);
  delay(1000);
}
