/*
 *File: 6-size.c
 */

# include <stdio.h>

/**
 *main- Prints "The size of char",followed by new line
 *		"The size of int",followed by new line
 *		"The size of long int",followed by new line
 *		"The size of long long int",followed by new line
 *		"The size of float",followed by new line
 *	Return: always 0
 */
int main(void)
{
	printf("Size of a char: %zu byte(s)\n"
	"Size of an int: %zu byte(s)\n"
	"Size of a long int: %zu byte(s)\n"
	"Size of a long long int: %zu byte(s)\n"
	"Size of a float: %zu byte(s)\n"
	, sizeof(char), sizeof(int), sizeof(long int),
	sizeof(long long int), sizeof(float));

	return (0);
}
