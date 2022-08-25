#include "main.h"

/**
  * puts2 - function that prints every other character of a string
  *
  * @str: pointer to char
 */

void puts2(char *str)
{
	int index = 0;

	while (*str != '\0')
	{
		if (index % 2 == 0)
			_putchar((*str));
		index += 1;
		s = (s + 1);
	}
	_putchar(10);
}
