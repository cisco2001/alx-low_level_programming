#include "main.h"
#include "stdlib.h"

/**
  * create_array - creates an array of characters
  *
  * @size: array size
  * @c: initialization character
  * Return: pointer to an array or NULL
  */

char *create_array(unsigned int size, char c)
{
	unsigned int counter = 0;
	char *char_array;

	if (size == 0)
		return (NULL);
	char_array = (char *)malloc(sizeof(char) * size);
	if (char_array == NULL)
		return (NULL);
	while (counter < size)
		*(char_array + counter++) = c;
	return (char_array);
}
