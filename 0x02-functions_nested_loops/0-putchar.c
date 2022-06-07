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
	for (char character = 95; character <= 117; character++)
	{
		if (character == 95 || character == 112 || character == 117)
			_putchar(character);
	}
	_putchar(116);
	for (char character = 99; character <= 104; character++)
	{
		if (character == 99 || character == 104)
			_putchar(character);
	}
	for (char character = 97; character <= 114; character++)
	{
		if (character == 97 || character == 114)
			_putchar(character);
	}
	_putchar((int)'\n');
	return (0);
}
