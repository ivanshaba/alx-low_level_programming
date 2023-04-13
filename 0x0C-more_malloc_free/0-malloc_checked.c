#include "main.h"
/**
malloc_checked - Allocates memory using malloc and exits with status 98 if it fails
@b: Number of bytes to allocate
Return: Pointer to allocated memory
*/
void *malloc_checked(unsigned int b)
{
	void *ptr;
	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
