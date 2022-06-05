#include "stdio.h"


/**
 * main - Entry point of this program
 *
 * Description: a program to print characters
 *
 * Return: always returns (0)
 */

int main(void)
{
	char character = 97;

	while (character < 123)
	{
		putchar(character);
		character++;
	}

	return (0);
}
