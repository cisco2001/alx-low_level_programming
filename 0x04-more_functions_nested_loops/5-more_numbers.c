#include "main.h"


/**
 * more_numbers - function to print numbers form 0 to 14 ten times
 *
 * Return: nothing is returned
 */


void more_numbers(void)
{
	int count = 0;
	char digit = 48;
	char second_digit = 48;

	while(count < 10)
	{
		while(digit <= 57)
		{
			_putchar(digit);
			if (digit > 57)
			{
				if (second_digit < 53)
				{
					_putchar(second_digit);
					second_digit++;
				}
				else
					break;
			}

			digit++;

			if (digit == 58)
			{
				digit = 49;
				second_digit = 49;
			}
		}
		_putchar((int)'\n');
		digit = 48;
		count++;
	}
}
