#include "main.h"

/**
  * _strcpy - function that copies a string from one location to another
  *
  * @dest: pointer to a buffer
  * @src: pointer to a string
  *
  * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *temp = dest;

	while (1)
	{
		if (*src != '\0')
			*dest = *src;
		else
		{
			*dest = *src;
			break;
		}
		src = (src + 1);
	}
	dest = temp;
	return (dest);
}


