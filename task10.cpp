#include <stdio.h>

int main() {
	int n = 0;
	int result = 0;
	printf("Enter  n: ");
	scanf("%d", &n);
	
	for(int k = 0; k <= 2 * n; k++)
	{
		result += (n + k) * (n + k);
	}
	printf("The result is %d", result);

	return 0;
}
