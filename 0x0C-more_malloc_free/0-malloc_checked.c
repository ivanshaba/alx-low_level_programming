/**
malloc_checked - Allocates memory and checks if allocation was successful.
@b: size of the memory to be allocated.
Return: Pointer to the allocated memory.
*/
void *malloc_checked(unsigned int b)
{
	void *ptr;
	ptr = malloc(b);
	if (ptr == NULL)
	{
		/* Print an error message and exit with status 98 */
		printf("Memory allocation failed\n");
		exit(98);
	}
	return (ptr);
}
