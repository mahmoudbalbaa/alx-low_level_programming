#include "main.h"

/**
 * jack_bauer - that prints every minute of the day of
 * Jack Bauer, starting from 00:00 to 23:59
 * @void: null
 * Return: void
 */
void jack_bauer(void)
{
	int mins, hrs = 0;

	while (hrs <= 23)
	{
		mins = 0;
		while (mins <= 59)
		{
			_putchar(hrs / 10 + '0');
			_putchar(hrs % 10 + '0');
			_putchar(':');
			_putchar(mins / 10 + '0');
			_putchar(mins % 10 + '0');
			_putchar('\n');
			mins++;
		}
		hrs++;
	}
}
