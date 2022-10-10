#include "dog.h"
#include <stdio.h>
/**
 * init_dog - initializes struct dog
 * @d: pointer to dog struct to be initialized
 * @name: dog name
 * @age: dog age
 * @owner: dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d.name = name;
		d.age = age;
		d.owner = owner;
	}
}
