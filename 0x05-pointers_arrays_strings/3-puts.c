#include "main.h"


/**
 * _puts - prints a string to stdout
 * @str: parameter
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar((int)(*str));
		str += 1;
	}
	_putchar(10);
}
