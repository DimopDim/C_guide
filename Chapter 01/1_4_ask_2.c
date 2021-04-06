#include <stdio.h>

int main(void)
{
	float x, y;
	
	printf("Enter first number: ");
	scanf("%f", &x);
	
	printf("Enter second number: ");
	scanf("%f", &y);
	
	printf("The sum of %f and %f is: %f", x, y, x+y);
	
	return 0;
}
