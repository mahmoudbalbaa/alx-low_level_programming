#include <stdio.h>

#include "lists.h"

/**
 * before_main - funcion that prints a specific string before the main,
 * function in executed.
 *
 * Return: no return.
 */


void __attribute__((constructor)) before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
