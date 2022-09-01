#include "main.h"
#include "stdlib.h"

/**
 * _strlen - calculates string length
 *
 * @str: address to the string
 * Return: string length
 */

int _strlen(char *str)
{
	int string_length = 0;

	while (*str)
		string_length++, str++;
	return (string_length);
}

/**
 * str_concat - joins two strings
 *
 * @s1: address to the first string
 * @s2: address to the second string
 * Return: address to the new string or NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *new_string;
	int index1 = 0, index2;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	index2 = _strlen(s1);
	new_string = malloc(sizeof(char) * (_strlen(s1) + _strlen(s2) + 1));
	if (!new_string)
		return (NULL);
	while (*s1 || *s2)
	{
		if (*s1)
			*(new_string + index1++) = *(s1++);
		if (*s2)
			*(new_string + index2++) = *(s2++);
		else
			*(new_string + index2) = '\0';
	}
	return (new_string);
}
