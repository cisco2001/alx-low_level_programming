#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: holds address of the first element of an array
 * @n: number of elements to be printed
 */

void print_array(int *a, int n)
{
	int index = 0;

	while (index <= n)
	{
		printf("%d", *(a +  index));
		_putchar(44);
		_putchar(8);
		index++;
	}
}
