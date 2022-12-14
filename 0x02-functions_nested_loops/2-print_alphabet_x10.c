#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase.
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)

{
	int n;
	int x;

	for (x = 0; x <= 9; x++)
	{
	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
	}

}
