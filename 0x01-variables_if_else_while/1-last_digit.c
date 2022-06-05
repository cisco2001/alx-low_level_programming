#include "stdlib.h"
#include "stdio.h"
#include "time.h"


/**
 * main - Entry point of the program
 *
 * Description: a program that prints the last digit
 *
 * Return: always return (0)
 */


int main(void)
{
	int n;
	char string[] = "Last digit of\0";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int lastDigit = n % 10;

	if (lastDigit > 5)
	{
		printf(stdout, "%s of %d is %d", string, n, lastDigit);
		printf(stdout, " and is greater than 5\n");
	}
	if (lastDigit == 0)
	{
		printf(stdout, "%s of %d is %d", string, n, lastDigit);
		printf(stdout, " and is zero\n");
	}
	if (lastDigit < 6)
	{
		printf(stdout, "%s of %d is %d", string, n, lastDigit);
		printf(stdout, " and is less than 6 and not 0\n");
	}
	return (0);
}
