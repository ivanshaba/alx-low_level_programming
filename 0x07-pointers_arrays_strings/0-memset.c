/**
 * _memset -  function sending a constant to memory
 * declare an unsigned int
 * because we are storing avalue that will always be
 * non-negative (zero or positive)
 * Fill each byte in the block of memory
 * pointed to by s with the value of b
*/ 
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
