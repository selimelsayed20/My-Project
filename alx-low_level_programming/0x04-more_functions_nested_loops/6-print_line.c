#include "main.h"
#include "6-main.c"
#include "_putchar.c"

/**
 * print_line - check the code
 *
 * Return: Always 0.
 */

void print_line(int n)
{
	int x;
	if (n<=0)
	{
		_putchar('\n');
	}
	
	for (x = 1; x < n; x++)
	{
		_putchar('_');
	}
	_putchar(10);
}
