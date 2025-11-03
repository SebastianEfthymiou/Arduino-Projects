int ledR1 = 10;
int ledR2 = 9;
int ledB = 6;
int ledG = 5;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledR1, OUTPUT);
  pinMode(ledR2, OUTPUT);
  pinMode(ledB, OUTPUT);
  pinMode(ledG, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledR1, HIGH);
  delay(1000);
  digitalWrite(ledR2, HIGH);
  delay(1000);
  digitalWrite(ledB, HIGH);
  delay(1000);
  digitalWrite(ledR1, LOW);
  digitalWrite(ledR2, LOW);
  digitalWrite(ledB, LOW);
  digitalWrite(ledG, HIGH);
  delay(2000);
  digitalWrite(ledG, LOW);
  delay(5000);
}
