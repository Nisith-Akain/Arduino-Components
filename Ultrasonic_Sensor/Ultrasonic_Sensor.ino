int trigpin = 4;
int echopin = 2;
void setup() {
  Serial.begin(9600);
  pinMode(trigpin,OUTPUT); 
  pinMode(echopin, INPUT);
}

void loop() {
  digitalWrite(trigpin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigpin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin, LOW);

  long duration = pulseIn(echopin, HIGH);
  long distance = duration * 0.034 /2;

  //Serial.println(duration);
  Serial.println(distance);
  delay(200);


}
