#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - Contains data of each dog
 * @name: a pointer to char
 * @age: a float num
 * @owner: a pointer to char
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* _DOG_H */
