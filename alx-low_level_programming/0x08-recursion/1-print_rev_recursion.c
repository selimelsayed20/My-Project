#include "main.h"
#include "_putchar.c"
#include "1-main.c"

/**
 * _print_rev_recursion - print a string.
 * @s: pointer to char
 * Return: No.
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s +1);
		_putchar(*s);

	}
	
}
