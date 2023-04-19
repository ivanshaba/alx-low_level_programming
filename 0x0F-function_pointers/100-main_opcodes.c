/**
 * print_opcodes - Prints the opcodes of a given memory location.
 * @a: The memory location to print the opcodes from.
 * @n: The number of bytes to print.
 *
 * Return: void.
 */
void print_opcodes(char *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", a[i]);
		if (i < n - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - Prints the opcodes of its own main function.
 * @argc: The number of arguments passed to the function.
 * @argv: An array of pointers to arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, n);
	return (0);
}
