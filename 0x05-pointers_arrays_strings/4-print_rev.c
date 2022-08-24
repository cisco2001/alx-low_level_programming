#include "main.h"

/**
  * print_rev - function that prints a reversed string
  *
  * @s: pointer to char
 */

int _strlen(char *s);
void print_rev(char *s)
{
	char *char_address = (s + _strlen(s) - 1);

	while (1)
	{
		if (char_address >= s)
		{
			_putchar((*char_address));
			char_address = (char_address - 1);
		}
		else
			_putchar(10);
	}
}

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
