/*Metatropi imerwn tis gis se eti dia*/

#include <stdio.h>

int main(void)
{
	float e_days, j_years; /*arithmos imerwn gis kai dia*/
	
	/*Eisodos imerwn gis*/
	printf("Enter number of Earth days: ");
	scanf("%f", &e_days);
	
	/*Ypologismos etwn dia*/
	j_years = e_days / (365.0 * 12.0);
	
	printf("Equivaqlent Jovian years: %f", j_years);
	
	return 0;
}
