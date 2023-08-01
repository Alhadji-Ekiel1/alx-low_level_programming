#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog and initializes its data members
 * @name: Pointer to the name of the new dog
 * @age: Float representing the age of the new dog
 * @owner: Pointer to the owner of the new dog
 *
 * Return: Pointer to the newly created dog_t struct (NULL if function fails)
 *
 * Description: This function creates a new dog and stores a copy name.
 * It returns a pointer to the newly created dog_t struct.
 * If the function fails to allocate memory, it returns NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_ptr;
	char *name_copy;
	char *owner_copy;

	new_dog_ptr = malloc(sizeof(dog_t));
	if (new_dog_ptr == NULL)
		return (NULL);

	name_copy = strdup(name);
	owner_copy = strdup(owner);

	if (name_copy == NULL || owner_copy == NULL)
	{
		free(name_copy);
		free(owner_copy);
		free(new_dog_ptr);
		return (NULL);
	}

	new_dog_ptr->name = name_copy;
	new_dog_ptr->age = age;
	new_dog_ptr->owner = owner_copy;

	return (new_dog_ptr);
}
