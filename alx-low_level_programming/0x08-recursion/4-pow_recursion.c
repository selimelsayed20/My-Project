#include "main.h"
#include "_putchar.c"
#include "4-main.c"

/**
 * _pow_recursion - a function that returns the value
 * @x: int
 * @y: int
 * Return:(0).
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x , y - 1 ));
	}
}
