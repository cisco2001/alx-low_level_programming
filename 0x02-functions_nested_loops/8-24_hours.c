#include "main.h"


/**
 * jack_bauer - function to print all minutes within a day
 *
 * Description: a program to print all minutes within a day'
 *
 * Return: nothing is returned
 */


void jack_bauer(void)
{
	int hour_first_digit = 0;
	int hour_second_digit = 0;
	int minutes_first_digit = 0;
	int minutes_second_digit = 0;
	int limit;

	for (; hour_first_digit <= 2; hour_first_digit++)
	{
		(hour_first_digit < 2) ? (limit = 9) : (limit = 3);
		for (; hour_second_digit <= limit; hour_second_digit++)
		{
			for (; minutes_first_digit <= 5; minutes_first_digit++)
			{
				for (; minutes_second_digit <= 9; minutes_second_digit++)
				{
					_putchar(48 + hour_first_digit);
					_putchar(48 + hour_second_digit);
					_putchar((int)':');
					_putchar(48 + minutes_first_digit);
					_putchar(48 + minutes_second_digit);
					_putchar((int)'\n');
				}
				minutes_second_digit = 0;
			}
			minutes_first_digit = 0;
		}
		hour_second_digit = 0;
	}
	hour_first_digit = 0;
}
