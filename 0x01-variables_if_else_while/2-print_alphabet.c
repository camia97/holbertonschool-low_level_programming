#include <stdio.h>
/**
*main - void
*Return: 0
*/

int main (void)

{
	int a = 97;
	char b = a;
	while(b < 123){
	putchar("value of a: %d\n", b);
	a++;	
	}
	return 0;
}
