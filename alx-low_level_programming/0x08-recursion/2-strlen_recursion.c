#include "main.h"
#include "_putchar.c"
#include "2-main.c"

/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: pointer to char
 * Return:(0).
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
