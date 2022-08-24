#include "main.h"

/**
  * _strlen - calculates length of the string
  *
  * @s: pointer to a character
  *
  * Return: length of a string in int
 */

int _strlen(char *s)
{
	int string_length = 0;

	while (*s != '\0')
	{
		string_length += 1;
		s = (s + 1);
	}
	return (string_length);
}
