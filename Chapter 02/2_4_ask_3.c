/*Find the divisors of a number */
#include<stdio.h>

int main (void)
{
	int num, i;
	
	printf("Enter the number: ");
	scanf("%d", &num);
	
	for (i=2; i<=num-1; i++)
		if((num%i)==0) printf("%d ", i);
	
	return 0;
}
