#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers within a given range
 * @min: minimum value of the range
 * @max: maximum value of the range
 *
 * Return: pointer to the new array, or NULL if allocation fails or min > max
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		ptr[i] = min++;
	}

	return (ptr);
}
