/*
 * apa102lib.cpp
 *
 * Created: 12/11/2020 10:47:51
 *  Author: barca
 */ 


//include all the necessary files
#include "apa102led.h"
#include <avr/io.h>
#include <stdio.h>
#include <util/delay.h>

#define unsigned char n


//transmit an SPI (Serial Peripheral Interface) byte 
void transferSPI(uint8_t data) 
{
	SPDR = uint8_t(data);
	while(!(SPSR & (1 << SPIF)));
}


//number of LEDs
void APA102::ledNumber(unsigned char numm)
{
	n = numm;
}


//blinking the LED
void APA102::letsBlink(unsigned char n){
	
	transferSPI(0);
	transferSPI(0);
	transferSPI(0);
	transferSPI(0);
	
	
	for (int i = 1; i <= n; i++) {
		
		transferSPI(255);
		transferSPI(0);
		transferSPI(0);
		transferSPI(0);
		
	}


	transferSPI(255);
	transferSPI(255);
	transferSPI(255);
	transferSPI(255);
	
	
	_delay_ms(1000);
}


//RGB and brightness of the LEDs
void APA102::colorLED(unsigned char r, unsigned char g, unsigned char b, unsigned char n, unsigned char brightness) { 
	
	transferSPI(0);
	transferSPI(0);
	transferSPI(0);
	transferSPI(0);
	
	for (int i = 1; i <= n; i++) {
		
		transferSPI(brightness);
		transferSPI(r);
		transferSPI(g);
		transferSPI(b);
		
	}
	
	transferSPI(255);
	transferSPI(255);
	transferSPI(255);
	transferSPI(255);	
	
}




