int led1 = 5 ;
int led2 = 7;
int pulsador = 2;
int A;
int estadofoco;
void setup() {
  pinMode(pulsador, INPUT);
  pinMode(led1, OUTPUT);
}
void loop() {
  A=digitalRead(2);
  Serial.println(A);
 if (A==1)
 {if(estadofoco==0){
          digitalWrite(led1,HIGH);
          estadofoco = 1;
 }
     else
         digitalWrite(led1,LOW);
         estadofoco = 0;
 }
 delay(1000);
 }

