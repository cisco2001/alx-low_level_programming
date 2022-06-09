#include "main.h"


/**
 * print_numbers - function to print from 0 up to 9
 *
 * Return: nothing
 */

void print_numbers(void)
{
	char digit  = 48;

	while (digit <= 57)
	{
		_putchar(digit);
		digit++;
		if (digit > 57)
			_putchar((int)'\n');
	}
}
