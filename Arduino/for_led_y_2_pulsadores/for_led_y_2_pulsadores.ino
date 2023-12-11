int Led = 3;
int i = 0;
int pulsador = 5;
int pulsador2 = 7;

void setup() { 
pinMode (Led, OUTPUT); pinMode (pulsador, INPUT);
  // put your setup code here, to run once:

}

void loop() {
  if (digitalRead (pulsador) == HIGH)
{
for (int i = 0 ; i<=255 ; i++)
{
  analogWrite (Led, i);
  delay (20);
}}
else
{digitalWrite (Led, LOW);
}
if (digitalRead (pulsador2)== HIGH)
{
  for (int i = 255 ; i>=0 ; i--)
  {
  analogWrite (Led, i);
  delay (20);
}}
else
{digitalWrite (Led, LOW);
}
  // put your main code here, to run repeatedly:
}
