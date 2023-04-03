/**
 * function takes in a pointer to a memory area s, a constant byte b, and the number of bytes n to fill with the constant byte
 *  It then uses a loop to fill each byte in the memory area with the constant byte b 
 *  Finally, it returns the pointer to the memory area s.
*/ 
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	while (i < n){
	s[i] = b;
	i++;
	}
	return (s);
}
