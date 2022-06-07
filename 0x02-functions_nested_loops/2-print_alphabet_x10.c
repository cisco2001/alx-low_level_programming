#include "main.h"


/**
 * print_alphabet_x10 - function that prints lowercase alphabets 10 times
 *
 * Description: a program to print lowercase alphabets 10 times
 *
 * Return: nothing is returned
 */


void print_alphabet_x10(void)
{
	char alphabet = 97;
	int number_of_times = 0;

	for (; number_of_times <= 9; number_of_times++)
	{
		while (alphabet <= 122)
		{
			_putchar(alphabet);
			alphabet++;
			if (alphabet > 122)
				_putchar((int)'\n');
		}
		alphabet = 97;
	}
}
