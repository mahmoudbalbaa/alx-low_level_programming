#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog -  function that initialize a variable of type struct dog
 * @d: a pointer to struct dog
 * @name: a pointer to char
 * @age: a float num
 * @owner: a pointer ti char
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
