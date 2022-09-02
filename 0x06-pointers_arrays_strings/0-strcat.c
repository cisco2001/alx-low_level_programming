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
		string_length++, str++;
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
	int index = _strlen(dest), j = 0;

	while (*src)
		*(dest + index++) = *(src + j++);
	*(dest + index) = '\0';
	return (dest);
}

