#include "main.h"


/**
 * print_last_digit - functionthat prints last digit of a number
 *
 * @number: a parameter to take in a number
 *
 * Description: a program that prints the last digit of a number
 *
 * Return: last digit of @number
 */

int print_last_digit(int number)
{
	(number < 0) ? (number %= -10) : (number %= 10);

	_putchar('0' + number);
	return (number);
}
