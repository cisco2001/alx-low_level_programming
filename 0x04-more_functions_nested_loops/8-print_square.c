#include "main.h"


/**
 * print_square - function to print a square
 *
 * @size: parameter for passing size of the square
 *
 * Return: nothing is returned
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar((int)'\n');
	}
	else
	{
		int side1_length = 0;
		int side2_length;

		for (; side1_length < size; side1_length++)
		{
			side2_length = 0;

			for (; side2_length < size; side2_length++)
			{
				_putchar((int)'#');
			}
			_putchar((int)'\n');
		}
	}
}
