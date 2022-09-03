#ifndef DOG_H
#define DOG_H
/**
  * struct dog - fog data type
  * @name: address of dog's name
  * @owner: address of owner's name
  * @age: age of the dog
  */

struct dog
{
	char *name;
	char *owner;
	float age;
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
