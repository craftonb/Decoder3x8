#include <Decoder3x8.h>
Decoder3x8 chip(7,6,5,4);
// third bit, second bit, first bit, enable bit
void setup()
{
}

void loop()
{
  chip.setOutput(0);
  delay(1000);
  chip.setOutput(1);
  delay(1000);
  chip.setOutput(2);
  delay(1000);
  chip.setOutput(3);
  delay(1000);
  chip.setOutput(4);
  delay(1000);
  chip.setOutput(5);
  delay(1000);
  chip.setOutput(6);
  delay(1000);
  chip.setOutput(7);
  delay(1000);
  chip.setOutput(8);
  delay(1000);
}
