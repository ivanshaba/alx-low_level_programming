#include "main.h"

/**
 * print_diagsums - This function prints the sums of the two diagonals of a square matrix.
 *
 * @matrix: Pointer to the start of the matrix.
 *
 * @size: Width of each column in the matrix.
 *
 * Return: void.
 */
void print_diagsums(int *matrix, int size)
{
	int i, j, pos, left_sum = 0, right_sum = 0;

	for (i = 0; i < size; i++)
	{
		pos = (i * size) + i;
		left_sum += *(matrix + pos);
	}
	for (j = 0; j < size; j++)
	{
		pos = (j * size) + (size - 1 - j);
		right_sum += *(matrix + pos);
	}
	printf("%i, %i\n", left_sum, right_sum);
}
