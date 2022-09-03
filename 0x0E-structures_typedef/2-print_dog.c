#include "dog.h"
#include "stdio.h"

/**
  * print_dog - prints struct dog
  *
  * @d: address of the memory location containing a structure
  */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}

