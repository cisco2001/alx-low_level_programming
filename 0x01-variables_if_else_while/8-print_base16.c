#include "stdio.h"


/**
 * main - Entry point of this program
 *
 * Description: a program to print all numbers of base 16
 *
 * Return: always returns (0)
 */


int main(void)
{
	int hex_number = 0;
	int ascii_0 = 48, ascii_a = 87;

	while (hex_number <= 16)
	{
		if (hex_number <= 9)
		{
			putchar(hex_number + ascii_0);
			ascii_0++;
		}
		else
		{
			putchar(hex_number + ascii_a);
			ascii_a++;
		}

		hex_number++;

		if (hex_number > 16)
			putchar((int)'\n');
	}

	return (0);
}
