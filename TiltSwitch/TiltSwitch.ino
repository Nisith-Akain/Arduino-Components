int tiltPin =3;
int GreenPin = 9;
int RedPin = 8;
int tiltVal;

void setup() {
  // put your setup code here, to run once:
pinMode(tiltPin, INPUT);
pinMode(GreenPin, OUTPUT);
pinMode(RedPin, OUTPUT);
digitalWrite(tiltPin,HIGH);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
tiltVal = digitalRead(tiltPin);
Serial.println(tiltVal);

if (tiltVal == 0){
  digitalWrite(GreenPin, HIGH);
  digitalWrite(RedPin, LOW);
}
if (tiltVal == 1){
  digitalWrite(RedPin, HIGH);
  digitalWrite(GreenPin, LOW);
}
}
