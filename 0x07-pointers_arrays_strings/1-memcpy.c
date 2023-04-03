#include "main.h"

/**
 * _memcpy - function copies @n bytes from memory area @src
 * to memory area @dest
 * @n: number of bytes to copy
 * @src: source pointer
 * @dest: destination pointer
 *
 * Return: pointer to destination
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
