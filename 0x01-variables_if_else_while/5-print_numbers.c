#include "stdio.h"


/**
 * main - Entry of the program, all codes reside here
 *
 * Description: a program to print all digits in decimal number system
 *
 * Return: always returns (0)
 */


int main(void)
{
	char digit = 48;

	while (digit <= 57)
	{
		putchar(digit);
		digit++;

		if (digit > 57)
			putchar((int)'\n');
	}

	return (0);
}
