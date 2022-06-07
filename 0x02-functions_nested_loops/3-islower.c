#include "main.h"


/**
 * _islower - a function to check whether a character is lowercase
 *
 * Description: a program to check for lowercase characters
 *
 * @c: a parameter for this function
 *
 * Return: can return (0) or (1)
 */


int _islower(int c)
{
	return ((c >= 97 && c <= 122) ? (1) : (0));
}
