#include "main.h"


/**
 * _abs - function to compute absolute value of a number
 *
 * @number: a parameter for this function
 *
 * Description: program to compute absolute value of @number
 *
 * Return: absolute value of @number
 */


int _abs(int number)
{
	return ((number < 0) ? (-1 * number) : (number));
}
