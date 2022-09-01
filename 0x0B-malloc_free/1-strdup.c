#include "main.h"
#include "stdlib.h"

/**
  * _strdup - duplicates a string
  *
  * @str: pointer to a string to be duplicated
  * Return: pointer to a new string or NULL
  */

char *_strdup(char *str)
{
	if (str == NULL)
		return (NULL);

	char *dup_str = malloc(sizeof(char) * _strlen(str) + 1);
	int counter = 0;
	char *temp = str;

	if (dup_str == NULL)
		return (NULL);
	while (1)
	{
		if (counter != _strlen(str))
			*(dup_str + counter++) = str++;
		else
		{
			*(dup_str + counter) = '\0';
			break;
		}
	}
	str = temp;
	return (dup_str);
}
