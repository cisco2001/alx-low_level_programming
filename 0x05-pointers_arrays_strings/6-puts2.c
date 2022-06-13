#include "main.h"


/**
 * puts2 - print one escape one
 *
 * @str: a parameter
 *
 * Return: nothing is returned
 */


void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str = str + 2;
	}
	_putchar((int)'\n');
}
