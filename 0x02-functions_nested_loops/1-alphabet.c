#include "main.h"


/**
 * main - Entry point of this program
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
		(alphabet > 122) ? _putchar((int)'\n') : _putchar(alphabet);
		alphabet++;
	}
}
