#include "main.h"


/**
 * time_table - function to print multiplication table
 *
 * Decription: a program to print a multiplication table
 *
 * Return: nothing is returned
 */


void times_table(void)
{
	int number1 = 0, number2 = 0;
	int first_digit, second_digit;
	int product;

	for (; number1 <= 9; number1++)
	{
		for (; number2 <= 9; number2++)
		{
			product = number1 * number2;
			second_digit = product % 10;
			product = product / 10;

			if (product == 0)
				first_digit = 0;
			else
				first_digit = product % 10;

			_putchar(48 + first_digit);
			_putchar(48 + second_digit);
			
			if (number2 < 9)
			{
				_putchar((int)',');
				_putchar((int)' ');
			}
		}
		_putchar((int)'\n');
	}
}
