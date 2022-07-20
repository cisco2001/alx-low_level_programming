#include "main.h"

/**
 * puts_half - prints half of a string followed by a new line
 * @str: holds address of first character of a string
 */

void puts_half(char *str)
{
	int string_length = 0;
	int starting_index;
	char *char_address = str;

	while (*str != '\0')
	{
		string_length += 1;
		str++;
	}
	if (string_length % 2 == 0)
		starting_index = (string_length / 2);
	else
		starting_index = (string_length + 1) / 2;
	char_address += starting_index;
	while (*char_address != '\0')
	{
		_putchar((int)(*char_address));
		char_address += 1;
	}
	_putchar(10);
}
