#include "main.h"
#include "3-main.c"
#include "_putchar.c"

/**
*print_numbers - function that print all numbers from
*0 to 9
*
*Return: returns nothing
*/

void print_numbers(void)
{
	int n;
	for (n = 48; n < 58; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
