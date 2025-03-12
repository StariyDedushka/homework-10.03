#include <stdio.h>

int main() {
	int month = 0;
	scanf("%d", &month);
	if(month <= 12 && month > 0)
	printf("The month is correct");
	else
	printf("Incorrect month format!");
	return 0;
}
