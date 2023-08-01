#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initializes a dog structure with provided data
 * @d: Pointer to the struct dog to be initialized
 * @name: Pointer to the name of the dog
 * @age: Float representing the age of the dog
 * @owner: Pointer to the owner of the dog
 *
 * Description: This function initializes a struct dog with the given data.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
