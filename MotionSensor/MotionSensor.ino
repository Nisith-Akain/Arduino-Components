const int pirpin = 4;
int val; 

void setup() {
Serial.begin(9600)
Serial.println("sensor calibrating");
delay(30000);
Serial.println("sensor active"); 
}

void loop() {
  val = digitalRead(pirpin);
  if (val == HIGH){
    Serial.println("Motion Detected")
  }else{
    Serial.println("No motion detected")
  }

}