/*In the following program is introduced the "else"*/

#include <stdio.h>

int main(void)
{
	int num;
	
	printf("Enter an integer: ");
	scanf("%d", &num);
	
	if(num < 0) printf("Number is a negative.");
	else printf("Number is non-negative.");
	
	return 0;
}
