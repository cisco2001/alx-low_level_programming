#include "main.h"


/**
 * _isalpha - function to check if a character is an alphabet
 *
 * @c: integer perimeter for this function
 *
 * Description: program to check if a character is an alphabet
 *
 * Return: can return (0) or (1)
 */


int _isalpha(int c)
{
	return (((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) ? (1) : (0));
}
