#include "main.h"


/**
 * _strlen - calculates length of the string
 *
 * @s: a pointer
 *
 * Return: length of the string
 */


int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
