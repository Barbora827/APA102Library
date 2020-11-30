/*
 * apa102main.cpp
 *
 * Created: 21/11/2020 16:22:08
 *  Author: barca
 */ 


//include all necessary files
#include "apa102led.h"
#include <avr/io.h>
#include <stdio.h>
#include <util/delay.h>


//define Atmega328 pins accordingly
#define SCK     PINB5
#define MISO    PINB4
#define MOSI    PINB3
#define CS      PINB2
#define SPI_DDR DDRB

//define the frequency of the CPU (16Mhz)
#define F_CPU 16000000UL


//set up the Serial Peripheral Interface for transmitting bytes
void setupSPI() 
{
	// enable SPI and set it as master
	SPCR = (1 << SPR1) | (1 << SPE) | (1 << SPR0) | (1 << MSTR);
	
	// set defined pins to output
	SPI_DDR |= (1 << MOSI) | (1 << SCK) | (1 << CS);

}



int main(void)
{
	APA102 apa102;
	setupSPI();
	
	
	
	while(1)
	{
		APA102.ledNumber(xy); //choose number of LEDs you want to control
		//led.letsBlink //blink the LEDs
		//led.colorLed(xx, yy, zz, www); //pick color and brightness of LEDs
	}
	
}