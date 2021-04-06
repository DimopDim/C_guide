/*Auto to programma exei tris sinartiseis*/

#include <stdio.h>

void func1(void); /*Prototypa*/
void func2(void);

int main(void)
{
	func2();
	printf("3");
}

void func2(void)
{
	func1();
	printf("2 ");
}

void func1(void)
{
	printf("1 ");
}
