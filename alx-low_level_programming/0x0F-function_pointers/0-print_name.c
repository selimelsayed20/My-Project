#include "function_pointers.h"
#include<stdlib.h>
#include "0-main.c"
/**
 * print_name - prints a name
 * @name: person's name
 * @f: pointer to a function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
if (f != NULL)
f(name);

}
