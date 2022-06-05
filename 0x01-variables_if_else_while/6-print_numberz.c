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
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + 48);
		digit++;

		if (digit > 9)
			putchar((int)'\n');
	}

	return (0);
}
