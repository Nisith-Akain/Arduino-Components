# include <Servo.h>
int servopin = 9;
int servopos = 0; 
Servo myservo; 

void setup() {
Serial.begin(9600);
myservo.attach (servopin);

}

void loop() {
  Serial.println("what angle");
  while (Serial.available()==0){
  }

  servopos = Serial.parseInt();

myservo.write(servopos);
}
