#include "main.h"


/**
 * _puts - prints a string to stdout
 *
 * @str: parameter
 *
 * Return: nothing is returned
 */


void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
