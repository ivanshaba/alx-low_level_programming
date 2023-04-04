#include "main.h"

/**
 * s: sets to a pointer
 * b: sets to a character
 * n: sets to an integer
 * _memset -  function sending a constant to memory
 * declare an unsigned int
 * because we are storing avalue that will always be
 * non-negative (zero or positive)
 * Fill each byte in the block of memory
 * pointed to by s with the value of b
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
	s[i] = b;
	i++;
	}

	return (s);
}
