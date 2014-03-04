// e is the enable pin, 3 is the third bit, 2 is second bit, 1 is first bit

/*
   input       output
3  2  1  e | 
*  *  *  0 | if e is not on, then no output is on
0  0  0  1 | 1
0  0  1  1 | 2 
0  1  0  1 | 3
0  1  1  1 | 4
1  0  0  1 | 5
1  0  1  1 | 6
1  1  0  1 | 7 
1  1  1  1 | 8
*/

#include "Arduino.h"
#include "Decoder3x8.h"

// the order of the pins is very important, obviously, but make sure they are connected correctly based on what parameters 
// your class object is constructed with.
Decoder3x8::Decoder3x8(int thirdBitPin, int secondBitPin, int firstBitPin, int enablePin) // Decoder3x8 constructor
{
  //assigning values in class to given parameters. 
  this->thirdBitPin = thirdBitPin;
  this->secondBitPin = secondBitPin;
  this->firstBitPin = firstBitPin;	
  this->enablePin = enablePin;		

  // setting up pins for 3x8 Decoder 
  pinMode(this->thirdBitPin, OUTPUT);
  pinMode(this->secondBitPin, OUTPUT);
  pinMode(this->firstBitPin, OUTPUT);
  pinMode(this->enablePin, OUTPUT);
}

void Decoder3x8::setOutput(int output) // sets inputs to decoder so that given output results 
{  
	this->output = output; 
	if(this->output == 0) // no outputs are on
	setState(0,0,0,0);
	else if(this->output == 1) // 1
	setState(0,0,0,1);
	else if(this->output == 2) // 2
	setState(0,0,1,1);
	else if(this->output == 3) // 3
	setState(0,1,0,1);
	else if(this->output == 4) // 4
	setState(0,1,1,1);
	else if(this->output == 5) // 5
	setState(1,0,0,1);
	else if(this->output == 6) // 6
	setState(1,0,1,1);
	else if(this->output == 7) // 7
	setState(1,1,0,1);
	else if(this->output == 8) // 8
	setState(1,1,1,1);
}

void Decoder3x8::setState(int state_thirdBit, int state_secondBit, int state_firstBit, int state_enable) // helper function used by Decoder3x8::setOutput 
{
	digitalWrite(this->thirdBitPin, state_thirdBit);
	digitalWrite(this->secondBitPin, state_secondBit);
	digitalWrite(this->firstBitPin, state_firstBit);
	digitalWrite(this->enablePin, state_enable);
}
