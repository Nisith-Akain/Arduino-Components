
int val;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(13, OUTPUT);
pinMode(A5, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
//Serial.println("what is your input");
//while (Serial.available()==0){}

val = analogRead(A5);
Serial.println(val);
if (val > 800){
  digitalWrite(13, HIGH);
}
if (val < 800){
  digitalWrite(13,LOW);
}

}
