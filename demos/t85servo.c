#include <avr/io.h>
#define F_CPU 8000000UL //8 MHz
#include <util/delay.h>

//set freq to 50 hz or as close as possible
int main(void)
{
//cli();//disable gobal interrupts
//sei(); //enable global interrupts
DDRB |=0b00000010; //set pin6 for output as first step for pwm 0c0b
TCCR0A |=0b00100011;//set up pwm mode
TCCR0B|=0b00001101;//set prescaler to /1024 
OCR0A= 156-1;//setting period
//setting the servo to go to 0 degrees upon power up
OCR0B=12;
_delay_ms(1000);
while(1){
OCR0B=8;//1 me pulse to set servo to go -90 deg 7.8
_delay_ms(3000);
OCR0B=12;//1.5 ms pulse to set servo to go to 0 deg 11.7
_delay_ms(3000);
OCR0B=16;//2 ms pulse to set servo to go to 90 deg 15.6
_delay_ms(3000);
OCR0B=12;//1.5 ms pulse to set servo to go to 0 deg 11.7
_delay_ms(3000);


}
return 0;
}




