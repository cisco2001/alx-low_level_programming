#include "main.h"

/**
  * _strlen - calculates string length
  *
  * @str: pointer to the string
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
  * _strncat - joins two strings
  *
  * @dest: pointer to the first string
  * @src: pointer to the first string
  * @n: number of bytes to be used
  * Return: pointer of the resulting string
  */

char *_strncat(char *dest, char *src, int n)
{
	int index = _strlen(dest), j = 0;

	while (n > 0 && *(src + j))
		*(dest + index++) = *(src + j++), n--;
	return (dest);
}
