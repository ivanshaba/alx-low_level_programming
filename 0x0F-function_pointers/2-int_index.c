#include "function_pointers.h"
#include <stdbool.h>

/**
  * int_index - Searches for an integer in an array using a function pointer.
  * @array: Array to search the integer in.
  * @size: Size of the array.
  * @cmp: Pointer to the function to use to compare.
  * 
  * Return: Index of the first element for which the cmp function does not return 0
  */
int int_index(int *array, int size, bool (*cmp)(int))
{
        int i = 0;

        if (size > 0)
        {
                if (array != NULL && cmp != NULL)
                {
                        while (i < size)
                        {
                                if (cmp(array[i]))
                                        return (i);

                                i++;
                        }
                }
        }

        return (-1);
}
