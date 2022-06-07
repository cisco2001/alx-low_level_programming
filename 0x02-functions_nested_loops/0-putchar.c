#include "main.h"


/**
 * main - Entry point of this program
 *
 * Description: a program to print _putchar
 *
 * Return: always returns (0)
 */


int main(void)
{
	char character = 95, character1 = 99, character2 = 97;

	for (; character <= 117; character++)
	{
		if (character == 95 || character == 112 || character == 117)
			_putchar(character);
	}

	_putchar(116);

	for (; character1 <= 104; character1++)
	{
		if (character1 == 99 || character1 == 104)
			_putchar(character1);
	}

	for (; character2 <= 114; character2++)
	{
		if (character2 == 97 || character2 == 114)
			_putchar(character2);
	}
	_putchar((int)'\n');
	return (0);
}
