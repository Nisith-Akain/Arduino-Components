#include <SPI.h>
#include <MFRC522.h>

#define SS_PIN 10
#define RST_PIN 9

MFRC522 rfid(SS_PIN, RST_PIN);
int redpin = 2;
int greenpin = 3;
byte allowed[] = {0xDE, 0xAD, 0xBE, 0xEF} 
byte allowedsize = 4;

void setup() {
  pinMode(redpin, OUTPUT);
  pinMode(greenpin, OUTPUT);
  Serial.begin(9600);
  SPI.begin();
  rfid.PCD_Init();
}

void loop() {
  if (!rfid.PICC_IsNewCardPresent()) return;
  if (!rfid.PICC_ReadCardSerial()) return;

  Serial.print("UID: ");
  for (byte i = 0; i < rfid.uid.size; i++) {
    Serial.print(rfid.uid.uidByte[i], HEX);
    Serial.print(" ");
  }
  Serial.println();

  bool ismatch = true;  
  if (rfid.uid.size != allowedsize) {
    ismatch = false;
  } else {
    for (byte i = 0; i < allowedsize; i++) {
      if (rfid.uid.uidByte[i] != allowed[i]) {
        ismatch = false;
        break;
      }
    }
  }

  if (ismatch) {
    digitalWrite(greenpin, HIGH);
    digitalWrite(redpin, LOW);
  } else {
    digitalWrite(greenpin, LOW);
    digitalWrite(redpin, HIGH);
  }

  delay(2000);         
  digitalWrite(greenpin, LOW);
  digitalWrite(redpin, LOW);

  rfid.PICC_HaltA();
  rfid.PCD_StopCrypto1();
}