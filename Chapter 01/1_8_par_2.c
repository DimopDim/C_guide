/*Ektyponei tin timi 10 stin othoni*/

#include <stdio.h>

int func(void); /*Prototypo*/

int main(void)
{
	int num;
	
	num = func();
	
	printf("%d", num);
	
	return 0;
	
}

int func(void)
{
	return 10;
}
