#include "main.h"
/**
 *
 * jack_bauer - cheeck if the character is lower
 * @c: the character
 * Return: one if character is lower
 */

void jack_bauer(void)
{

	int hour, minute;

	for (hour = 0; hour <=23; hour++)

	{

		for (minute = 0; minute <=23; minute++)

		{

			_putchar(( hour / 10) + '0');

			_putchar(( hour % 10) + '0');

			_putchar(':');

			_putchar(( minute / 10) + '0');

			_putchar(( minute % 10) + '0');

			_putchar('\n');

		}

	}

}
