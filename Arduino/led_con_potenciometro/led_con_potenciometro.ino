int LED = 13 ;
int BRILLO ;
int POT = 0 ;

void setup() { pinMode (LED, OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
   for (BRILLO = 0; BRILLO < 256 ; BRILLO ++)
  {
  analogWrite (LED, BRILLO);
  delay (15);
  }
  
  // put your main code here, to run repeatedly:

}
