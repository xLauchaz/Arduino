int LEDROJO = 9;
int LEDVERDE = 10;
int LEDAZUL = 11;

void setup() {
  pinMode (LEDROJO, OUTPUT);
  pinMode (LEDVERDE, OUTPUT);
  pinMode (LEDAZUL, OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  analogWrite (LEDROJO, 255); // amarillo
  analogWrite (LEDVERDE, 255);
  analogWrite (LEDAZUL, 0);
  delay (2000);

  analogWrite (LEDROJO, 0); // celeste
  analogWrite (LEDVERDE, 255);
  analogWrite (LEDAZUL, 255);
  delay(2000);

  analogWrite (LEDROJO, 255); // rosa
  analogWrite (LEDVERDE, 118);
  analogWrite (LEDAZUL, 192);
  delay(2000);
  // put your main code here, to run repeatedly:

}
