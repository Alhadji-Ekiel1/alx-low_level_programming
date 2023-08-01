#include <stdlib.h>
#include "main.h"

/**
 * array_range - Creates an array of integers within a given range.
 * @min: The minimum value to store in the array.
 * @max: The maximum value to store in the array and number of elements.
 *
 * Return: Pointer to the new array, or NULL if the range is invalid.
 */
int *array_range(int min, int max)
{
	int *result;
	int index, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	result = malloc(sizeof(int) * size);

	if (result == NULL)
		return (NULL);

	for (index = 0; min <= max; index++)
		result[index] = min++;

	return (result);
}
