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
	printf("The size of char: %zu byte(s)\n"
	"The size of int: %zu byte(s)\n"
	"The size of long int: %zu byte(s)\n"
	"The size of long long int: %zu byte(s)\n"
	"The size of float: %zu byte(s)\n"
	,sizeof(char),sizeof(int),sizeof(long int),
	sizeof(long long int),sizeof(float));

	return (0);
}
