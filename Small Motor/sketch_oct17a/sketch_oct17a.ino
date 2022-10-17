#define MOTORPIN 11     // Digital pin connected to the DHT sensor

void setup() {
  // put your setup code here, to run once:
  pinMode(MOTORPIN,OUTPUT) ;
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(MOTORPIN,HIGH) ;
  delay(5000);
  digitalWrite(MOTORPIN,LOW) ;
  delay(1000);
}
