#include "main.h"

/**
  * puts_half - function that prints half of a string
  *
  * @str: pointer to a char
 */

void puts_half(char *str)
{
	int strlen = 0;
	char *temp = str;
	char *char_address;

	while (*str != '\0')
	{
		strlen += 1;
		str = (str +1 );
	}
	str = temp;
	if (strlen % 2 == 0)
		char_address = (str + (strlen / 2));
	else
		char_address = (str + ((strlen - 1) / 2));
	while (*char_address != '\0')
	{
		_putchar((*char_address));
		char_address = (char_address + 1);
	}
	_putchar(10);
}
