#include "main.h"


/**
 * print_sign - function to check and print sign of a number
 *
 * @n: an integer parameter
 *
 * Description:  a program to check and print sign of a number
 *
 * Return: can return (1) , (0) or (-1)
 */


int print_sign(int n)
{
	if (n > 0)
	{
		_putchar((int)'+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar((int)'-');
		return (-1);
	}
	else
	{
		_putchar((int)'0');
		return (0);
	}
}
