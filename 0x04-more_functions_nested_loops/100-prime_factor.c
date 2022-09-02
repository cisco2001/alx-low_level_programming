#include "stdio.h"


/**
 * main - Entry point for this program
 *
 * _isprime - function to check if a number is prime
 *
 * Description: refer above
 *
 * @n: parameter for passing a number
 *
 * Description: program to find the largest prime factor
 *
 * Return: program returns (0)
 */

int _isprime(int n);

int main(void)
{
	int number = 612852475143;
	int prime_factor;
	int count  = 1;

	for (; count < (number / 2); count++)
	{
		if (_isprime(count) != 0)
			prime_factor = count;
	}
	printf("%d\n", prime_factor);
	return (0);
}

int _isprime(int n)
{
	int number_of_factors = 0;
	int divisor = 1;
	int count = 0;

	for (; count < (n / 2); count++)
	{
		if ((n / 2) % divisor == 0)
			number_of_factors++;
		divisor++;
		if (number_of_factors > 2)
			break;
	}

	return ((number_of_factors == 2) ? (n) : (0));
}
