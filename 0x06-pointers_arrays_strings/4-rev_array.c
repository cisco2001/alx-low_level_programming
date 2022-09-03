#include "main.h"

/**
  * reverse_array - reverses array content
  *
  * @a: an array of integers
  * @n: number of elements to swap
  * Return: nothing
  */

void reverse_array(int *a, int n)
{
	int i = 0, j = n - 1;

	while (i != j)
	{
		a[i] ^= a[j], a[j] ^= a[i], a[i] ^= a[j];
		i++, j--;
	}
}
