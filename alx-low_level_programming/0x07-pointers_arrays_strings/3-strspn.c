#include "main.h"
#include "_putchar.c"
#include "3-main.c"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: pointer to char params
 * @accept: pointer to char params
 * Return: Always 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	char *t = accept;

	while (*s++)
	{
		while (*accept++)
			if (*(s - 1) == *(accept - 1))
			{
				c++;
				break;
			}
		if (!(*--accept))
			break;
		accept = t;
	}
	return (c);
}
