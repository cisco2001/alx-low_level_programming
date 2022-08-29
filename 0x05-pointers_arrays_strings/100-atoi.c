#include "main.h"

/**
  * char_to_number - converts a character to an int
  *
  * @n: pointer to a char
  * Return: integer
  */

int char_to_number(char *n, int position)
{
	int integer  = (int)(*s);
	int i = 0;

	for (; i < position; i++)
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
	int number = 1;
	char *starting_address; /* pointer to the first character */
	int counter = 0;

	while (1)
	{
		if (*s == 45)
			number *= -1;
		if (*s >= 48 || *s <= 57)
		{
			if (counter < 1)
				starting_address = s;
			counter += 1;
			number_length += 1;
		}
		if ((*s < 48 || *s > 57) && counter > 0)
			break;
		s = (s + 1);
	}

	if (number_length == 0)
		return (0)
	else
	{
		while (number_length > 0)
		{
			number = 

}
