#include "main.h"

/**
  * _strlen - calculates length of a string
  *
  * @str: pointer to string
  * Return: length in int
  */

int _strlen(char *str)
{
	int string_length = 0;

	while (*str)
	{
		string_length++;
		str = (str + 1);
	}
	return (string_length);
}

/**
  * _strcat - concatenates two strings
  *
  * @dest: pointer to the first string
  * @src: pointer to the second string
  * Return: pointer to dest
  */

char *_strcat(char *dest, char *src)
{
	char temp[_strlen(dest) + _strlen(src) - 1];
	int i = 0, j = _strlen(dest) - 2;

	while (1)
	{
		if (*dest)
		{
			temp[i++] = *dest;
			dest = (dest + 1);
		}
		temp[j++] = *(++src);
		if (*src)
			break;
	}
	dest = temp;
	return (dest);
}

