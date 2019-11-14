/*
 * Download the source code:https://github.com/Cokoino/CKK0005
 * Programmer:cokoino
 * date:2019-11-14
 */
#include"CokoinoTree.h"
CokoinoTree ChristmasTrees(A0);
void setup() {
  Serial.begin(9600);
  Serial.println("htpp://www.cokoino.com");
}
void loop() {
  ChristmasTrees.Flash(500);
  ChristmasTrees.Shift(8);
  ChristmasTrees.Flash_ON_OFF(250,100);
  ChristmasTrees.Flash(100);
  ChristmasTrees.Shift(6);
  ChristmasTrees.Flash_ON_OFF(100,250);
}
