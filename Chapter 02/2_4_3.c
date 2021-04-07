/*Calcuation of sum and the product of numbers from one to five*/

#include<stdio.h>

int main (void)
{
	int sum, num, prod;
	
	sum = 0;
	prod = 1;
	
	for(num=1; num<6; num++){
		sum = sum + num;
		prod = prod * num;
	}
	
	printf("Product and sum: %d %d", prod, sum);
	
	return 0;
}
