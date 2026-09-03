
#include <LedControl.h>

int dt = 1000;

// LedControl(dataPin, clkPin, csPin, numDevices)
LedControl lc = LedControl(12, 10, 11,1);

void setup() {
  lc.shutdown(0, false);   
  lc.setIntensity(0, 8);   
  lc.clearDisplay(0);     
}

void loop() {

    lc.setRow(0, 0, B01100110);
lc.setRow(0, 1, B11111111);
lc.setRow(0, 2, B11111111);
lc.setRow(0, 3, B11111111);
lc.setRow(0, 4, B01111110);
lc.setRow(0, 5, B00111100);
lc.setRow(0, 6, B00011000);
lc.setRow(0, 7, B00000000);
delay(dt);
lc.clearDisplay(0);
lc.setRow(0, 0, B00010000);
lc.setRow(0, 1, B00111000);
lc.setRow(0, 2, B01010100);
lc.setRow(0, 3, B10010010);
lc.setRow(0, 4, B00010000);
lc.setRow(0, 5, B00010000);
lc.setRow(0, 6, B00010000);
lc.setRow(0, 7, B00000000);
delay(dt);
lc.clearDisplay(0);
lc.setRow(0, 0, B00001000);
lc.setRow(0, 1, B00001100);
lc.setRow(0, 2, B11111111);
lc.setRow(0, 3, B11111111);
lc.setRow(0, 4, B11111111);
lc.setRow(0, 5, B00001100);
lc.setRow(0, 6, B00001000);
lc.setRow(0, 7, B00000000);
delay(dt);
lc.clearDisplay(0);
lc.setRow(0, 0, B00011000);
lc.setRow(0, 1, B00011000);
lc.setRow(0, 2, B00110000);
lc.setRow(0, 3, B01100000);
lc.setRow(0, 4, B00110000);
lc.setRow(0, 5, B00011000);
lc.setRow(0, 6, B00001100);
lc.setRow(0, 7, B00000110);
delay(dt);
lc.clearDisplay(0);



}
