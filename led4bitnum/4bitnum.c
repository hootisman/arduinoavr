#include <avr/io.h>
#include <util/delay.h>

int main(){
  DDRB = DDRB | (1 << DDB3) | (1 << DDB2) | (1 << DDB1) | (1 << DDB0);  //set PORTB5, 4, 3, 2 to Output, see page 86 of ATmega manual
  int num = 0;
  while(1){
    PORTB = num % 16;
    _delay_ms(500);
    num++;
  }
  return 0;
}
