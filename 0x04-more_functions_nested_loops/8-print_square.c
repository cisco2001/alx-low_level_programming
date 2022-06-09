#include "main.h"


/**
 * print_square - function to print a square
 *
 * @size: parameter that stands for square size
 *
 * Return: nothing is returned
 */


void print_square(int size)
{
	if (size >= 0)
	{
		int side1_length = 0

		for (; side1_length < size; side1_length++)
		{
			int side2_length = 0;

			for (; side2_length < size; side2_length++)
			{
				_putchar((int)'#');
			}
			_putchar((int)'\n');
		}
	}
	else
		_putchar((int)'\n');
}
