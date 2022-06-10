#include "stdio.h"


/**
 * main - Entry point in this program
 *
 * Description: a program to test candidate programming competency
 *
 * Return: returns (0)
 */


int main(void)
{
	int number = 1;

	for (; number <= 100; number++)
	{
		if (number % 3 == 0 && number % 5 != 0)
			printf("Fizz");
		else if (number % 3 != 0 && number % 5 == 0)
			printf("Buzz");
		else if (number % 3 == 0 && number % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", number);
	}

	return (0);
}
