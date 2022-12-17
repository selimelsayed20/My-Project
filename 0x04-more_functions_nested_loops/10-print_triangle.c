#include "main.h"
#include "10-main.c"
#include "_putchar.c"

/**
 * print_triangle - check the code
 *
 * Return: Always 0.
 */

void print_triangle(int size)
{
	int x;
	int n;

	for (n = size; n >= 1; n--)
	{
		for (x = 1; x <= n; x++)
		{
			_putchar(' ');
		}

		for (x = size; x >= n; x--)
		{
			_putchar('#');
		}
		_putchar(10);
	}
}
