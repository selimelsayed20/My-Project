#include "main.h"
#include "_putchar.c"
#include "2-main.c"

/**
 * _strchr - a function that locates a character in a string
 * @s: pointer to char params
 * @c: index
 * Return: Always 0
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
return (0);
}
