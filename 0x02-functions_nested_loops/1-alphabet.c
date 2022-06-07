#include "main.h"


/**
 * print_alphabet - function to print alphabets
 *
 * Descriptiopn: a program to print alphabets in lowercase
 *
 * Return: does not return anything
 */


void print_alphabet(void)
{
	char alphabet = 97;

	while (alphabet <= 122)
	{
		_putchar(alphabet);
		alphabet++;
		if (alphabet > 122)
			_putchar((int)'\n');
	}
}
