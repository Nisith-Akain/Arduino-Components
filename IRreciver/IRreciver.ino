#include <IRremote.h>
int IRpin = 2;
IRrecv IR(IRpin);
decode_results cmd;

void setup() {
  Serial.begin(9600);
  IR.enableIRIn();
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {
  if (IR.decode(&cmd)) {
    Serial.println(cmd.value, HEX);

    if (cmd.value == 0xFF30CF) {   // button 1
      digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
    }

    if (cmd.value == 0xFF18E7) {   // button 2
      digitalWrite(4, LOW);
      digitalWrite(5, HIGH);
    }

    delay(500);
    IR.resume();
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
  }
}