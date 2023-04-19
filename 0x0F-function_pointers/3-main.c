#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point. Evaluates arithmetic operations passed as arguments.
 * @argc: Number of arguments passed to the program.
 * @argv: Array of pointers to strings containing the arguments passed to the program.
 *
 * Return: 0 if success, otherwise exit with error status.
 */
int main(int argc, char *argv[])
{
	int (*oprt)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	oprt = get_op_func(argv[2]);

	if (!oprt)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", oprt(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
