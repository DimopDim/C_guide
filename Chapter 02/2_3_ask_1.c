/*The following program adds or subtracts two integers*/

#include <stdio.h>

int main (void)
{
	int choice, num1, num2;
	
	printf("1. Sum - 2. subtract: ");
	scanf("%d", &choice);
	
	printf("Enter the first number: ");
	scanf("%d", &num1);
	
	printf("Enter the second number: ");
	scanf("%d", &num2);
	
	if(choice == 1) printf("The number add is: %d", num1+num2);
	else printf("THe number subtract is: %d", num1-num2);
	
	return 0;
}
