#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the number of arguments passed into it
 * @argc: an integer
 * @argv: an array of strings
 * Return: always 0
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
