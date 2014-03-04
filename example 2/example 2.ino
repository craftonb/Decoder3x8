#include <Decoder3x8.h>
Decoder3x8 chip(7,6,5,4);
// third bit, second bit, first bit, enable bit
int i;
void setup()
{
}

void loop()
{
  chip.setOutput(i);
  delay(1000);
  i++;
  if (i>8)
  i=0;
}
