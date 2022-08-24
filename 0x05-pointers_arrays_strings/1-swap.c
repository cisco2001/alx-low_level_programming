#include "main.h"

/**
  * swap_int - given two pointers swap the values they point to
  *
  * @a: pointer to an int
  * @b: pointer to an int
 */

void swap_int(int *a, int *b)
{
	int temp; /* a variable to hold value temporarily during swapping */

	temp = *b;
	*b = *a;
	*a = temp;
}
