#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints the details of a dog
 * @d: Pointer to the struct dog to be printed
 *
 * Description: This function prints the details of a struct dog.
 * If an element of d is NULL, it will print "(nil)" .
 * If d is NULL, it will print nothing.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	return;
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
