#include <stdio.h>

int main() {
	int x = 0, y = 0;
	printf("Введите x: ");
	scanf("%d", &x);
	printf("Введите y: ");
	scanf("%d", &y);
	if(x > y) 
	printf("%d", x);
	else
	printf("%d%d", x, y);
	return 0;
}
