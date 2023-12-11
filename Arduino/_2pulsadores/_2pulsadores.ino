int pulsador = 6 ;
int led = 9 ;
int led2 = 4 ;
int pulsador2 = 8 ;
void setup() { 
pinMode (pulsador, INPUT); 
pinMode (pulsador2, INPUT); 
pinMode (led, OUTPUT); 
pinMode (led2, OUTPUT);
  // put your setup code here, to run once:

}

void loop() {  if (digitalRead (pulsador) == HIGH)
{
digitalWrite (led, HIGH);
delay (300);
}
else
{ digitalWrite (led, LOW);
}
if (digitalRead (pulsador2) == HIGH)
{
digitalWrite (led2, HIGH);
delay (300);
}
else
{ digitalWrite (led2, LOW); 
}
  // put your main code here, to run repeatedly:

}
