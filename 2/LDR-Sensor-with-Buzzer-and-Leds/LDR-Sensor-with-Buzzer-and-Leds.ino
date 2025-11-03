const int gled = 13;
const int rled = 2;
const int buzz = 11; 
const int ldr = A0; 




void setup() {
  // put your setup code here, to run once:
  pinMode (gled, OUTPUT);
  pinMode (rled, OUTPUT);
  pinMode (buzz, OUTPUT);
  pinMode (ldr, INPUT);
  Serial.begin(9600);
}

void loop() {

  // put your main code here, to run repeatedly:
  int value = analogRead(ldr);
  Serial.println(value);

if (value>=300){

  digitalWrite(gled, LOW);
  digitalWrite(rled, HIGH);
  tone(buzz, 1000);
  delay(1000);
  noTone(buzz);
  delay(1000);

}else{
    digitalWrite(gled, HIGH);
  digitalWrite(rled, LOW);
  noTone(buzz);
}

}
