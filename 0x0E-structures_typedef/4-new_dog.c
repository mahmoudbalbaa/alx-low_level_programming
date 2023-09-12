#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
	ndog->name = name ? strdup(name) : NULL;
	ndog->age = age;
	ndog->owner = owner ? strdup(owner) : NULL;

	return (ndog);
}
