#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints its name, followed by a new line
 * @argc: an integer
 * @argv: an array of pointers to char
 * Return: always 0
 */

int main(int __attribute__((unused)) argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
