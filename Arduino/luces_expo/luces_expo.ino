int foco1 = 5;
int foco2 = 6;
int foco3 = 4;
int foco4 = 3;
int ledcancha = 7;
int ledpuerta = 6;

void setup() {
  pinMode(foco1,OUTPUT);
  pinMode(foco2,OUTPUT);
  pinMode(foco3,OUTPUT);
  pinMode(foco4,OUTPUT);
  pinMode(ledcancha,OUTPUT);
  pinMode(ledpuerta,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  //digitalWrite(foco1,HIGH);
  //digitalWrite(foco2,HIGH);
  //digitalWrite(foco3,HIGH);
  //digitalWrite(foco4,HIGH);
  //digitalWrite(ledcancha,HIGH);
  //digitalWrite(ledpuerta,HIGH);
  //delay(80);
  digitalWrite(foco1,HIGH);
  digitalWrite(foco2,HIGH);
  digitalWrite(foco3,HIGH);
  digitalWrite(foco4,HIGH);
  digitalWrite(ledcancha,LOW);
  delay(100);
  digitalWrite(ledcancha,HIGH);
  delay(100);
  digitalWrite(ledpuerta,LOW);
  delay(1500);
  digitalWrite(ledpuerta,HIGH);
  delay(300);
  digitalWrite(ledpuerta,LOW);
  delay(80);
  digitalWrite(ledpuerta,HIGH);
  delay(50);
  digitalWrite(ledpuerta,LOW);
  delay(80);
  digitalWrite(ledpuerta,HIGH);
  delay(50);
  digitalWrite(ledpuerta,LOW);
  delay(1500);
  digitalWrite(ledpuerta,HIGH);
  delay(300);
  // put your main code here, to run repeatedly:

}
