#include "main.h"

/**
 * _strlen - computes length of a given string
 * @s: holds address of the first character
 * 
 * Return: length of a string;
 */

int _strlen(char *s)
{
	int string_length = 0;

	while(*s != '\0')
	{
		string_length += 1;
		s += 1;
	}
	return (string_length);
}
