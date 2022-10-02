#define LED1 7
#define LED2 8
int delayAmount = 1000;
void setup() {
  // put your setup code here, to run once:
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(LED1, 0);
  analogWrite(LED2, 255);
  delay(delayAmount);
  analogWrite(LED1, 255);
  analogWrite(LED2, 0);
  delay(delayAmount);
}
