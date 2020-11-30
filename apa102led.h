/*
 * apa102led.h
 *
 * Created: 15/11/2020 14:11:38
 *  Author: barca
 */ 

#ifndef APA102LED_H_
#define APA102LED_H_

//define a class for our APA102 strip
class APA102
{
	
	public:
	
	void letsBlink();
	void ledNumber(unsigned char numm);
	void colorLed(unsigned char r, unsigned char g, unsigned char b , unsigned char brightness);
	
	private:
	
	int i;
	unsigned char n = 1;
	unsigned char r;
	unsigned char g;
	unsigned char b;
	
	
}
;

#endif