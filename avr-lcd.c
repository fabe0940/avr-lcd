#include <avr/interrupt.h>
#include <avr/io.h>
#include <inttypes.h>
#include <stdlib.h>

void init(void);

int main(void) {
	init();

	/* Main loop */
	while (1) {
	}
	
	exit(0);
}

void init(void) {
	/* Initialize IO registers */
	DDRA = 0xFF;
	DDRB = 0xFF;

	/* Disable interrupts */
	cli();

	return;
}