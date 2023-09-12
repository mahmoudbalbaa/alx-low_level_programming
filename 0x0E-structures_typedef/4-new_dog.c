#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - function that creates a new dog
 * @name: a pointer to char
 * @age: a float num
 * @owner: a pointer to char
 * Return: NULL if ndog equals NULL or ndog if not
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog = malloc(sizeof(dog_t));

	if (ndog == NULL)
		return (NULL);
	ndog->name = name;
	ndog->age = age;
	ndog->owner = owner;

	return (ndog);
}
