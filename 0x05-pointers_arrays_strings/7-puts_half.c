#include "main.h"

/**
 * puts_half - prints half of a string followed by a new line
 * @str: holds address of first character of a string
 */

void puts_half(char *str)
{
	int string_length = _strlen(str);
	int starting_index;
	char *char_address;

	starting_index = (string_length % 2 == 0)? (string_length / 2) + 1 : (string_length + 3) / 2;
	char_address = starting_index + str;
	while (*char_address != '\0')
	{
		_putchar((int)(*char_address));
		char_address += 1;
	}
	_putchar(10);
}
