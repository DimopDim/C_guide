/*Improved version of foot converter in meters and vice versa*/

#include<stdio.h>

int main(void)
{
	float num;
	int choice;
	
	printf("1: Feet to Meters, 2: Meters to Feet. "); //If we respect the choices and do not put anything else.
	printf("Enter a choice: ");
	scanf("%d", &choice);
	
	if(choice == 1){
		printf("Enter number of feet: ");
		scanf("%f", &num);
		printf("Meters: %f", num/3.28);
	}
	else {
		printf("Enter number of meters: ");
		scanf("%f", &num);
		printf("Feet: %f", num*3.28);
	}
	
	return 0;
}
