#include "main.h"
#include "7-main.c"
#include "_putchar.c"

/**
 * print_diagonal - check the code
 *
 * Return: Always 0.
 */

void print_diagonal(int n)
{

	int len, space;
	for (len = 1; len <= n; len++)
	{
		for (space= 1; space <= len; space++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar(10);
	}
}	
