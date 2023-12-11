
int receptor = A0 ;
int receptor1 = A1 ;
int sensorval ;
int sensorval1 ;
int IN1 = 5 ;
int IN2 = 2 ;
int IN3 = 3 ;
int IN4 = 4 ;

void setup() {
  Serial.begin(9600);
  pinMode (IN1, OUTPUT); 
  pinMode (IN2, OUTPUT);  
  pinMode (IN3, OUTPUT); 
  pinMode (IN4, OUTPUT); 
  // put your setup code here, to run once:

}

void loop() {
  sensorval=analogRead(receptor); // Amarillo
  Serial.println (sensorval); // Amarillo
  delay (300);
  sensorval1=analogRead(receptor1); // Naranja
  Serial.println (sensorval1); // Naranja
  delay(300);

  if (sensorval < 300 && sensorval1 < 300 )
{
  digitalWrite (IN1, LOW);
  digitalWrite (IN2, HIGH);
  digitalWrite (IN3, LOW);
  digitalWrite (IN4, HIGH);
  
}
if (sensorval > 300 && sensorval1 > 300 )
{ 
  digitalWrite (IN1, LOW);
  digitalWrite (IN2, LOW);
  digitalWrite (IN3, LOW);
  digitalWrite (IN4, LOW);
 
}
  if (sensorval > 300 && sensorval1 < 300 )
  {
    digitalWrite (IN1, LOW);
    digitalWrite (IN2, LOW);
    digitalWrite (IN3, LOW);
    digitalWrite (IN4, HIGH);
    
  }
  if (sensorval < 300 && sensorval1 > 300 )
  {
   
    digitalWrite (IN1, LOW);
    digitalWrite (IN2, HIGH);
    digitalWrite (IN3, LOW);
    digitalWrite (IN4, LOW);
  }
  
  //if ((sensorval1) > 500)
  //{
    //digitalWrite (IN1, LOW);
    //digitalWrite (IN2, HIGH);
    //digitalWrite (IN3, LOW);
    //digitalWrite (IN4, LOW);
    
  //}
 else
  {
    digitalWrite (IN1, LOW);
    digitalWrite (IN2, HIGH);
    digitalWrite (IN3, LOW);
    digitalWrite (IN4, HIGH);
  }
  // put your main code here, to run repeatedly:

}
