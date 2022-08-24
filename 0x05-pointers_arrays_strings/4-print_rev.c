#include "main.h"

/**
  * print_rev - function that prints a reversed string
  *
  * @s: pointer to char
 */

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

