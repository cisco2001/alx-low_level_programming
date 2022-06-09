#include "main.h"


/**
 * print_line - function to print a straight line
 *
 * @n: parameter to pass number of '_' to be printed
 *
 * Return: nothing is returned
 */


void print_line(int n)
{
	if (n <= 0)
		_putchar((int)'\n');
	else
	{
		int count  = 0;

		for (; count < n; count++)
		{
			_putchar('_');
		}
		_putchar((int)'\n');
	}
}
