int analogSensor = 0;
int digitalSensor = 0;
int pinzumbador = 2;
int frecuencia = 1000;

void setup() { 
  Serial.begin(9600);
  pinMode(7,INPUT);
  pinMode(4,OUTPUT);
  pinMode(pinzumbador,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  analogSensor=analogRead(2);
  digitalSensor=digitalRead(7);
  delay(100);
  if (digitalRead(7) == HIGH)
  {
    (digitalWrite (pinzumbador,HIGH));
    tone(pinzumbador,frecuencia);
    delay(2000);
    noTone(pinzumbador);
    delay(100);
    tone(pinzumbador,frecuencia);
    delay(2000);
    noTone(pinzumbador);
  }
  else
  digitalWrite(pinzumbador, LOW);
}
void puertoSerie(){
  Serial.print("valor analogico:");
  Serial.print(analogSensor);
  Serial.print("valor digital:");
  Serial.println(digitalSensor);
  return;
  // put your main code here, to run repeatedly:

}
