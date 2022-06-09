#include "main.h"


/**
 * _isupper - function that checks for uppercase characters
 *
 * @c: a parameter for passing character argument to be tested
 *
 * Descriptio: a program to check for uppercase characters
 *
 * Return: (1) for uppercase characters or (0) if otherwise
 */


int _isupper(int c)
{
	return ((c >= 65 && c <= 90) ? (1) : (0));
}
