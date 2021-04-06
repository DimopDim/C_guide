/*Ôhe following program converts feet into meters and vice versa*/

#include <stdio.h>

int main(void)
{
	float num;
	int choice;
	
	printf("Enter value: ");
	scanf("%f", &num);
	
	printf("1: Feet to Meters, 2: Meters to Feet. ");
	scanf("%d", &choice);
	
	if(choice == 1) printf("%f", num / 3.28);
	if(choice == 2) printf("%f", num * 3.28);
	
	return 0;
}
