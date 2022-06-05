#include "stdio.h"


/**
 * main - Entry point of this program
 *
 * Description: a program to print characters except q and e
 *
 * Return: always returns (0)
 */

int main(void)
{
	char character = 97;

	while (character < 123)
	{
		if (character == (int)'q' || character == (int)'e')
			continue;

		putchar(character);
		character++;

		if (character > 122)
			putchar((int)'\n');
	}

	return (0);
}
