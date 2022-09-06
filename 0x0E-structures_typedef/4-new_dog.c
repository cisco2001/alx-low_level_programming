#include "dog.h"
#include <stddef.h>
#include "stdlib.h"

/**
  * _strlen - calculates string length
  * @str: address of the string
  * Return: string length
  */

int _strlen(char *str)
{
	int string_length = 0;

	while (*str)
		string_length++, str++;
	return (string_length);
}

/**
  * new_dog - creates a new dog
  *
  * @name: dog's name
  * @age: dog's age
  * @owner: dog's owner
  * Return: a new dog
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	int name_size  = _strlen(name), owner_size = _strlen(owner);
	int total_size = name_size + owner_size + 2;
	dog_t *dog = malloc(sizeof(age) + (total_size) * sizeof(char));

	if (dog)
		return (NULL);
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	return (dog);
}
