#include <stdio.h>
#include <avr/io.h>

unsigned char ToggleBit(unsigned char reg, int bit) {
	return reg ^ (1 << bit);
}

int main() {
	unsigned char my_port = 9;
	
	my_port = ToggleBit(my_port, 3);
	
	return 0;
}