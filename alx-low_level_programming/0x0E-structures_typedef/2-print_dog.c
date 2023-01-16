#include <stdio.h>
#include "dog.h"
#include "2-main.c"

/**
 * print_dog - a function that prints a struct dog
 * @d: A dog structure.
 * Return: Nothing
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
		{
			d->name = "(nil)";
		}
		if (d->owner == NULL)
		{
			d->owner = "(nil)";
		}
		printf("Name: %s\nage: %.1f\nowner: %s", d->name, d->age, d->owner);
	}
}
