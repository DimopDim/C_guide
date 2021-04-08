/*Substitution of increase and decrease operators*/

#include<stdio.h>

int main(void)
{
	int i, j, x, y;
	
	i = 10;
	j = i++;
	x = 10;
	y = ++x;
	
	//print the numbers 11 and 10
	printf("i and j: %d %d ", i, j);
	
	//print the numbers 11 and 11
	printf("x and y: %d %d", x, y);
	
	return 0;
}
