#include "main.h"

/**
  * char_to_number - converts a character to an int
  *
  * @n: pointer to a char
  * Return: integer
  */

int char_to_number(char *n, int position)
{
	int integer  = (int)(*n);
	int i = 0;

	if (position - 1 == 0)
		return (integer);
	for (; i < (position - 1); i++)
		integer *= 10;
	return (integer);
}

/**
  * _atoi - converts a string to an integer
  *
  * @s: pointer to a string
  * Return: 0
 */

int _atoi(char *s)
{
	int  number_length = 0;
	int sign = 1;
	char *starting_address; /* pointer to the first character */
	int counter = 0;
	int number = 0;

	while (*s != 0)
	{
		if (*s == 45 && counter == 0)
			sign *= -1;
		if (*s >= 48 && *s <= 57)
		{
			if (counter < 1)
				starting_address = s;
			counter += 1;
			number_length += 1;
		}
		s = (s + 1);
		if ((*s < 48 && *s > 57) && counter > 0)
			break;
	}

	if (number_length == 0)
		return (0);
	else
	{
		while (number_length > 0)
		{
			number += char_to_number(starting_address, number_length);
			starting_address = (starting_address + 1);
			number_length--;
		}
	}
	return (sign * number);
}
