#include <avr/io.h>
#define F_CPU 8000000UL //8 MHz
#include <util/delay.h>

//set freq to 50 hz or as close as possible
int main(void)
{
//cli();//disable gobal interrupts
//sei(); //enable global interrupts
DDRB |=0b00010000; //set pin3 PB4  for output as first step for pwm 0c1b
TCCR1 |=0b10001011;//set up pwm prescaler p89 to /1024
GTCCR |=0b01100000;//enable pwm 
OCR1C= 158-1;//setting period originally 156 setting it to a higher value to get closer to 50Hz
//setting the servo to go to 0 degrees upon power up
OCR1B=12;
_delay_ms(1000);
while(1){
OCR1B=7;//1 me pulse to set servo to go -90 deg old 7 
_delay_ms(3000);
OCR1B=12;//1.5 ms pulse to set servo to go to 0 deg 
_delay_ms(3000);
OCR1B=18;//2 ms pulse to set servo to go to 90 deg old 18
_delay_ms(3000);
OCR1B=12;//1.5 ms pulse to set servo to go to 0 deg
_delay_ms(3000);


}
return 0;
}




