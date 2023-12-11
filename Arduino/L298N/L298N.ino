int receptor = A0 ;
int sensorval ;
int IN1 = 1; 
int IN2 = 2;
int IN3 = 3;
int IN4 = 4;

void setup() {
  Serial.begin(9600);
  pinMode (IN1, OUTPUT);    // Input4 conectada al pin 4 
  pinMode (IN2, OUTPUT);    // Input3 conectada al pin 5
  pinMode (IN3, OUTPUT); 
  pinMode (IN4, OUTPUT); 
  // put your setup code here, to run once:

}

void loop() {
  sensorval=analogRead(receptor);
  Serial.println (sensorval);
  delay(560);
  digitalWrite (IN1, HIGH);
  digitalWrite (IN2, LOW);
  digitalWrite (IN3, LOW);
  digitalWrite (IN4, HIGH);
  delay(5000); // Motor gira en sentido inverso
 
  // put your main code here, to run repeatedly:

}
