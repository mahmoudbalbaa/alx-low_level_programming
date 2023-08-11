#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - assign an int variable n
* IF n greater than 0 Prints "is positive",followed by a new line
* ELSE IF n equal 0 Prints "is zero",followed by a new line
* ELSE Prints "is negative",followed by a new line
* Return: always 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
