const int gled = 13;
const int rled = 2;
const int buzz = 11; 
const int trig = 4; //int ldr = A0; 
const int echo = 3; //



void setup() {
  // put your setup code here, to run once:
  pinMode (gled, OUTPUT);
  pinMode (rled, OUTPUT);
  pinMode (trig, OUTPUT); //
  pinMode (echo, INPUT); //
  pinMode (buzz, OUTPUT);

  Serial.begin(9600);
}

void loop() {

  // put your main code here, to run repeatedly:
  long duration, distance;

    digitalWrite(trig, LOW); // value = analogRead(sensor);
  delayMicroseconds(2); // Serial.println(value);
  digitalWrite(trig, HIGH); //
  delayMicroseconds(10); //
  digitalWrite(trig, LOW); //


  duration = pulseIn(echo, HIGH); // value = analogRead(sensor); 
  distance = (duration*.034)/2; //

  Serial.print("distance: "); // Serial.println(value);
  Serial.println(distance); //
  delay(100); //

if (distance < 30) { // if (value<300){

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
