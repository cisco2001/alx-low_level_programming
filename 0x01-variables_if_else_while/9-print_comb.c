#include "stdio.h"


/**
 * main - Entry point of this program
 *
 * Description: a program to print all single digits in ascending order
 *
 * Return: always return (0)
 */

int main(void)
{
	int count = 0;

	while (count <= 9)
	{
		putchar(48 + count);
		count++;
		if (count <= 9)
		{
			putchar((int)',');
			putchar((int)' ');
		}
		else
			putchar((int)'\n');
	}

	return (0);
}
