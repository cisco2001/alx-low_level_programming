#include "stdlib.h"
#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: holds address of the first byte of a 0s and 1s string
 *
 * Return: converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int number = 0, binary_zero = 0, binary_one = 1;
	char *char_address = (char *)b;

	if (b == NULL)
		return (0);
	while (1)
	{
		if (*(char_address + 1) != '\0')
			char_address++;
		else
			break;
	}
	while (char_address >= b)
	{
		if (*char_address == '0')
			number += binary_zero << i++;
		else if (*char_address == '1')
			number += binary_one << i++;
		else
			return (0);
		char_address--;
	}
	return (number);
}

