#include <avr/io.h>
#include <util/delay.h>

int main(){
  DDRB = DDRB | (1 << DDB5);  //set PORTB5 to Output, see page 86 of ATmega manual
  while(1){
    PORTB = PORTB | (1 << PORTB5);
    _delay_ms(1000);
    PORTB = PORTB & ~(1 << PORTB5);
    _delay_ms(1000);
  }
  return 0;
}
