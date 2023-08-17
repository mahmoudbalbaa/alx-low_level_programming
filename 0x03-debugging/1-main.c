#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

	while (i < 10)
	{
	/*this is part that causing the infinite loop cause the i value
	 * doesn't increase*/
		putchar(i);
	}

	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
