/*The following program checks if the number we enter is odd or even */

#include <stdio.h>

int main(void)
{
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	
	if(num%2==0) printf("The number is even");
	if(num%2 !=0) printf("The number is odd");
	
	return 0;
}
