#include <stdio.h>

int main() {
	char character = 255;
	
	printf("Char = %i\n", character);	// почему возвращается -1, если должно 255?
	printf("Char = %i\n", character + 1);
	return 0;
}
