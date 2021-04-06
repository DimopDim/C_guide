/*In the following program it asks for two numbers and after selection displays either the sum or the product*/

#include<stdio.h>

int main(void)
{
	int num1, num2, choice;
	
	printf("Enter the first number: ");
	scanf("%d", &num1);
	
	printf("Enter the second number: ");
	scanf("%d", &num2);
	
	printf("1.Sum - 2.Multiply: ");
	scanf("%d", &choice);
	if(choice==1) printf("The sum of the numbers is: %d", num1+num2);
	else printf("The multiply of the numbers is: %d", num1*num2);
	
	return 0;
}
