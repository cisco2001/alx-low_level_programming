#include "main.h"


/**
 * print_most_numbers - function to print numbers from 0 up to 9 except 2 & 4
 *
 * Return: nothing is returned
 */


void print_most_numbers(void)
{
	char digit = 48;

	while (digit <= 57)
	{
		if (digit != 50 && digit != 52)
			_putchar(digit);

		digit++;

		if (digit > 57)
			_putchar((int)'\n');
	}
}
