#include "main.h"


/**
 * print_diagonal - functiopn to print a diagonal in a screen
 *
 * @n: parameter for passing the numbe rof times character '\' has to be printed
 *
 * Return: nothing is returned
 */


void print_diagonal(int n)
{
	if (n <= 0)
		_putchar((int)'\n');
	else
	{
		int count = 0;

		for (; count < n; count++)
		{
			int number_of_spaces = 0;

			for (; number_of_spaces < count; number_of_spaces++)
			{
				_putchar((int)' ');
			}

			_putchar(92);
			_putchar((int)'\n');
		}
	}
}
