#include "main.h"

/**
 * puts_half - prints half of a string followed by a new line
 * @str: holds address of first character of a string
 */

void puts_half(char *str)
{
	int string_length = _strlen(str);
	int starting_index;
	char *starting_point;

	starting_index = (string_length % 2 == 0)? (string_length / 2) + 1 : (string_length + 3) / 2;
	starting_point = starting_index + str;
	for (; starting_point <= string_length; starting_point++)
	{
		_putchar((int)(*starting_point));
	}
	_putchar(10);
}
