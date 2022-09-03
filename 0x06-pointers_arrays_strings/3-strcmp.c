#include "main.h"

/**
  * _strcmp - compares two strings
  *
  * @s1: pointer to the first string
  * @s2: pointer to the second string
  * Return: number
  */

int _strcmp(char *s1, char *s2)
{
	int areEqual = 0;

	while (*s1 && *s2)
	{
		if (*s1 == *s2)
		{
			areEqual *= 0;
		}
		else if (*s1 < *s2)
		{
			areEqual += (*s1 < *s2);
			break;
		}
		else
		{
			areEqual += (*s1 > *s2);
			break;
		}
		s1++;
		s2++;
	}
	return (areEqual);
}
