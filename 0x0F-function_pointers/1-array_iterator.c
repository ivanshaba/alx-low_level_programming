#include "function_pointers.h"

/**
 * array_iterator - Executes a function on each element of an array.
 * @array: Array to execute the function on.
 * @size: Size of the array.
 * @action: Pointer to the function to use.
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		i = 0;
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
