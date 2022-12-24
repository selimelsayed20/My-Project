#include "main.h"
#include "4-main.c"
#include "_putchar.c"

/**
*print_most_numbers - prints numbers except 2 and 4
*
*Return: returns nothing
*/

void print_most_numbers(void)
{
	int n;
	for (n = 48; n < 58; n++)
	{
		if ((n != 50) && (n != 52))
		{
		_putchar(n);
		}
	}
	_putchar('\n');	
}
