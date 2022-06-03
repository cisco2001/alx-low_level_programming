#include "stdlib.h"
#include "stdio.h"
#include "time.h"


/**
 * main - Entry point of the program
 *
 * Description: a program to check whether a number is +/- or zero
 *
 * Return: always return zero
 */


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		fprintf(stdout, "%d is positive\n", n);
	else if (n < 0)
		fprintf(stdout, "%d is negative\n", n);
	else
		fprintf(stdout, "%d is zero\n", n);
	return (0);
}
