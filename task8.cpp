#include <stdio.h>

int main() {
	int n = 0;
	double result = 1;
	printf("We will multiply all numbers between 8 and n.\n Enter n: ");
	scanf("%d", &n);
	
	if(n < 8) {
		for(int i = n; i <= 8; i++) {
		result *= i;
	}
	printf("The result is %.1f", result);
	} else if(n > 8) {
		for(int i = n; i >= 8; i--)
		result *= i;
	printf("The result is %.1f", result);
	} else
	printf("n is equal to 8");
	return 0;
}
