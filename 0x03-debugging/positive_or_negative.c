#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
* main - assign an int variable n
* IF n greater than 0 Prints "is positive",followed by a new line
* ELSE IF n equal 0 Prints "is zero",followed by a new line
* ELSE Prints "is negative",followed by a new line
* Return: always 0
*/
void positive_or_negative(int i)
{
        if (i > 0)
                printf("%d is positive\n", i);
        else if (i == 0)
                printf("%d is zero\n", i);
        else
                printf("%d is negative\n", i);
}
