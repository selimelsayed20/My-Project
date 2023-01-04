#include "main.h"
#include "_putchar.c"
#include "3-main.c"

/**
 * factorial - a function that returns the factorial of a given number
 * @n: int
 * Return:(0).
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
