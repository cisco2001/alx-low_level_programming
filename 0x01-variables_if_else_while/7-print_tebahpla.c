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
	char character = 122;

	while (character > 96)
	{
		putchar(character);
		character--;
		if (character < 96)
			putchar((int)'\n');
	}

	return (0);
}
