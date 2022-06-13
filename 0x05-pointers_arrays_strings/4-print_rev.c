#include "main.h"


/**
 * print_rev - reverse a string
 *
 * @s:  for holding base address of array of characters to be passed
 *
 * Return: nothing is returned
 */


void print_rev(char *s)
{
	char *start_string = s;

	while (*s != '\0')
	{
		s++;
	}
	for (; s >= start_string; s--)
	{
		_putchar(*s);
	}
	_putchar((int)'\n');
}
