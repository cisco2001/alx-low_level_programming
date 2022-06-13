#include "main.h"


/**
 * swap_int - swaps two integers
 *
 * @a: first parameter
 *
 * @b: second parameter
 *
 * Return: nothing is returned
 */


void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
