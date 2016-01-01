/*
 * porttest3.c
 *
 * Created: 11/25/2013 8:45:42 AM
 *  Author: admin
 */ 


#include <avr/io.h>
#include <util/delay.h>
#include "lcd.h"
#include <string.h>

// char as[100]="ajdghh";

char stri(void);

int main(void)
{
	DDRC=0x00;
 lcd_init(LCD_DISP_ON_CURSOR_BLINK);
  lcd_clrscr();

	int i=0;
	
	
	 char *s;
	 s="derjyhg";
	 /*s[0]='h';
	 s[1]='e';
	 s[2]='r';
	 s[3]='\0';
	 //s="hero";*/
	 
	 lcd_puts(s);
	/* while(*s!='\0')
	 {
		lcd_putc(*s); s++;
	 }
	 */
	
	
	//stri();
	 // lcd_puts(stri());
  

}
 
char stri(void)
 {
	 char s[6];
	// s[6]='h','e','r','o','\0';
	s[6]="hero";
	lcd_puts(s);
	//lcd_gotoxy(0,1);
	// return (s);
 }
 
        