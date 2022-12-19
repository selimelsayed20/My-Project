#include "main.h"

/**
 * _strlen - a function that swaps the values of two integers.
 * @s: input string.
 * Return: no return.
 */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')

		i++;
	return (i);
}
