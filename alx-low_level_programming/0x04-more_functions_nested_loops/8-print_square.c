#include "main.h"
#include "_putchar.c"
#include "8-main.c"

/**
 * print_square - check the code
 *
 * Return: Always 0.
 */

void print_square(int size)
{
	int x;
	int n;
	if (size <=0)
	{
		_putchar(10);
	}
	else
	{
	for (n= 1; n <= size; n++)
	{
	for (x=1;x<=size;x++)
	{
	_putchar('#');
	}
	_putchar(10);
	}
	}

}
