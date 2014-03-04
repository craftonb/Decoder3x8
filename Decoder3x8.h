#ifndef Decoder3x8_h
#define Decoder3x8_h

class Decoder3x8
{
  public:
  	// the order of the pins is very important, obviously, but make sure they are connected correctly based on what parameters 
    // your class object is constructed with.
    Decoder3x8(int thirdBitPin, int secondBitPin, int firstBitPin, int enablePin); // Decoder3x8 constructor
	void setOutput(int output); // sets inputs to decoder so that given output results 
	void setState(int state_thirdBit, int state_secondBit, int state_firstBit, int state_enable); // helper function used by Decoder3x8::setOutput 
  private:
    int output;       
	
	int thirdBitPin; 
	int secondBitPin;
	int firstBitPin;
	int enablePin;
};

#endif

