/*This loop is not running*/

#include<stdio.h>

int main(void)
{
	int num;
	
	for (num=11; num<11; num=num+1) printf("%d ", num);
	printf("terminating");
	
	return 0;
}
