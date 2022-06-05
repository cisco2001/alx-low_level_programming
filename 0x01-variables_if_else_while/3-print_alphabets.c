#include "stdio.h"


/**
 * main - Entry point of the program
 *
 * Description: a program that prints all letters in uppercase and lowercase
 *
 * Return: always returns(0)
 */

int main(void)
{
	char uppercase = 65, lowercase = 97;

	while (lowercase <= 122)
	{
		putchar(lowercase++);
	}
	while (uppercase <= 90)
	{
		putchar(uppercase++);
	}
	putchar((int)'\n');
	return (0);
}
