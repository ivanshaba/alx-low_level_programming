#include "main.h"

/**
 * print_chessboard - This function prints the chessboard.
 *
 * @pieces: Pointer to the chess pieces to print.
 *
 * Return: void.
 */
void print_chessboard(char (*pieces)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(pieces[i][j]);
		}
		_putchar('\n');
	}
}
