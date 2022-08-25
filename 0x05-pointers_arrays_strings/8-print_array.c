#include "stdio.h"
#include "main.h"

/**
  * print_array - function that prints n elements of an array of integers
  *
  * @a: array to deal with
  * @n: pointer to int
 */

void print_array(int *a, int n)
{
	while (1)
	{
		if (n > 1)
			printf("%d, ", *a);
		if (n == 1)
		{
			printf("%d\n", *a);
			break;
		}
		if (n <= 0)
		{
			printf("\n");
			break;
		}
		a = (a + 1);
		n = (n - 1);
	}
}
