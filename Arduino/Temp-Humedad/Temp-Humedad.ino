#include <DHT.h>
#include <DHT_U.h>

int SENSOR = 2;
int TEMPERATURA;
int HUMEDAD;

DHT dht (SENSOR, DHT22);

int led1 = 13;
int led2 = 5;
void setup() {
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  Serial.begin (9600);
  dht.begin();
  //

}

void loop() {
  TEMPERATURA = dht.readTemperature();
  HUMEDAD = dht.readHumidity();
  Serial.print("Temperatura: ");
  Serial.print(TEMPERATURA);
  Serial.print("Humedad: ");
  Serial.println(HUMEDAD);
  delay(500);
    if (HUMEDAD > 1300)
      digitalWrite(led1,HIGH);
    else (HUMEDAD < 1300);
      digitalWrite(led2,HIGH);
      digitalWrite(led1,LOW);
  // put your main code here, to run repeatedly:

}
