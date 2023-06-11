#include "Blink.h"

Blink bl;

void setup() {
//  pinMode(4, OUTPUT);
  bl.init();
}

void loop() {
//  digitalWrite(4, HIGH);
//  delay(1000);
//  digitalWrite(4, LOW);
//  delay(1000);
  bl.my_blink();
}
