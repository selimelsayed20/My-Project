#include <stdio.h>
#include "dog.h"
#include "1-main.c"

/**
 * init_dog - Initializes a dog structure
 * @d: A dog structure.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;

}
