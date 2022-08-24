#include "main.h"

/**
  * rev_string - function that reverses a string
  *
  * @s: pointer to a char
 */

void rev_string(char *s)
{
	int string_length = 0;
	char *char_address;
	char temp;

	while (*s != '\0')
	{
		string_length += 1;
		s = (s + 1);
	}
	char_address = (s + string_length - 1);
	while (1)
	{
		if (char_address > s)
		{
			temp = *char_address;
			*char_address = *s;
			*s = *temp;
		}
		else
			break;
		char_adress = (char_address - 1);
		s = (s + 1);
	}
}


