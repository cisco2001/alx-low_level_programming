#include "stdio.h"
#include "main.h"


/**
 * print_to_98 - function to print from n to 98
 *
 * @n: a number, starting point
 *
 * Description: program to print numbers in ascending order from n to 98
 *
 * Return: nothing is returned
 */


void print_to_98(int n)
{
	for (; n <= 98; n++)
	{
		printf("%d", n);
		if (n < 98)
			printf(", ");
	}
	printf("\n");
}
