#include "main.h"
#include "stdlib.h"

/**
  * _strlen - calculates string length
  *
  * @str: pointer to a string
  * Return: length of a string
  */

int _strlen(char *str)
{
	int string_length = 0;

	while (*str)
	{
		string_length++;
		str++;
	}
	return (string_length);
}

/**
  * _strdup - duplicates a string
  *
  * @str: pointer to a string to be duplicated
  * Return: pointer to a new string or NULL
  */

char *_strdup(char *str)
{
	char *dup_str;
	int counter = 0;
	char *temp = str;

	if (str == NULL)
		return (NULL);
	dup_str = malloc(sizeof(char) * _strlen(str) + 1);
	if (dup_str == NULL)
		return (NULL);
	while (1)
	{
		if (counter < _strlen(temp))
			*(dup_str + counter++) = *(str++);
		else
		{
			*(dup_str + counter) = '\0';
			break;
		}
	}
	str = temp;
	return (dup_str);
}
