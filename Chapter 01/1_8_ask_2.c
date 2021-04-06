/*Metatropi dolaria se lires agglias*/

#include <stdio.h>

float convert(void);

int main(void)
{
	printf("The volume of money are: %f", convert());
}

float convert(void)
{
	float dollars;
	printf("Enter the amount of dollars: ");
	scanf("%f", &dollars);
	
	return dollars / 2.0;
}
