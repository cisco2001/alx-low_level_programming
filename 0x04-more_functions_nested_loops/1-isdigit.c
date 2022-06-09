#include "main.h"


/**
 * _isdigit - function to check if a character is a digit
 *
 * @c: parameter to hold the value of a character
 *
 * Description: program to check if a character is a digit
 *
 * Return: (1) if character is a number else (0)
 */


int _isdigit(int c)
{
	return ((c >= 48 && c <= 57) ? (1) : (0));
}
