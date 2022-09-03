#include "main.h"
#include "stdio.h"

/**
  * string_toupper - converts lowercase to uppercase
  *
  * @s: address of the string to manipulate
  * Return: adress of the resulting string
  */

char *string_toupper(char *s)
{
	int index = 0;

	while (*(s + index))
  {
    if (*(s + index) >= 97 && *(s + index) <= 122)
			*(s + index) = *(s + index) - 32;
    index++;
  }
	return (s);
}
