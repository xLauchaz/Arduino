#include<AFMotor.h>

AF_DCMotor motor1(1, MOTOR34_64KHZ);

AF_DCMotor motor2(2, MOTOR34_64KHZ);

void setup() {
  motor1.setSpeed(100); //Naranja
  motor2.setSpeed(230);  //Amarillo

}

void loop() {
  motor1.run(BACKWARD); //  Naranja AVANZA
  motor2.run(FORWARD); // Amarillo AVANZA
  delay(3100); //1m
  
  motor1.run(RELEASE);
  motor2.run(RELEASE);
  delay(3000);
  
  //motor1.run(BACKWARD);//  Naranja AVANZA
  //motor2.run(BACKWARD); // Amarillo RETROCEDE
  //delay(4450); // 200°

  //motor1.run(BACKWARD); // Naranja AVANZA
  //motor2.run(BACKWARD); // Amarillo RETROCEDE
  //delay(2000); // 90°
  
  //motor1.run(RELEASE);
  //motor2.run(RELEASE);
  //delay(3000);

  //motor1.run(BACKWARD); //  Naranja AVANZA
  //motor2.run(FORWARD); // Amarillo AVANZA
  //delay(2550); //60cm
  
  //motor1.run(RELEASE);
  //motor2.run(RELEASE);
  //delay(3000);

  //motor1.run(BACKWARD); // Naranja AVANZA
  //motor2.run(BACKWARD); // Amarillo RETROCEDE
  //delay(2720); // gira en la esquina
  
  //motor1.run(RELEASE);
  //motor2.run(RELEASE);
  //delay(3000);

  //motor1.run(BACKWARD); //  Naranja AVANZA
  //motor2.run(FORWARD); // Amarillo AVANZA
  //delay(5000); //1,100m
  
  //motor1.run(RELEASE);
  //motor2.run(RELEASE);
  //delay(3000);

  //motor1.run(BACKWARD); // Naranja AVANZA
  //motor2.run(BACKWARD); // Amarillo RETROCEDE
  //delay(3150); // gira en la esquina para el empiezo
  
  //motor1.run(RELEASE);
  //motor2.run(RELEASE);
  //delay(3000);

  //motor1.run(BACKWARD); //  Naranja AVANZA
  //motor2.run(FORWARD); // Amarillo AVANZA
  //delay(4450); //1m
  
  //motor1.run(RELEASE);
  //motor2.run(RELEASE);
  //delay(3000);

  //motor1.run(BACKWARD); // Naranja AVANZA
  //motor2.run(BACKWARD); // Amarillo RETROCEDE
  //delay(2720); // gira en la esquina
  
  //motor1.run(RELEASE);
  //motor2.run(RELEASE);
  //delay(3000);

  //motor1.run(BACKWARD); //  Naranja AVANZA
  //motor2.run(FORWARD); // Amarillo AVANZA
  //delay(5000); //1,100m
  
  //motor1.run(RELEASE);
  //motor2.run(RELEASE);
  //delay(3000);

  //motor1.run(BACKWARD); // Naranja AVANZA
  //motor2.run(BACKWARD); // Amarillo RETROCEDE
  //delay(3150); // gira en la esquina para el empiezo
  
  //motor1.run(RELEASE);
  //motor2.run(RELEASE);
  //delay(3000);

  // put your main code here, to run repeatedly:

}
