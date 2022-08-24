#include "main.h"

/**
  * _puts - functon that prints a string followed by a new line
  *
  * @str: pointer to char
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar((*str));
		str = (str + 1);
		if (*str == '\0')
			_putchar(10);
	}
}
