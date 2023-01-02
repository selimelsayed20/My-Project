#include "main.h"
#include "_putchar.c"
#include "1-main.c"

/**
 * _memcpy - a function that copies memory area
 * @dest: pointer to char params
 * @src: pointer to char params
 * @n: index
 * Return: *dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
