#include "main.h"

/**
 * _sqrt_recursion - Computes the square root of a number recursively.
 * @n: The number to compute the square root of.
 * Return: The square root of n or -1 if n has no natural square root.
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - Helper function to compute the square root of a number recursively.
 * @n: The number to compute the square root of.
 * @i: The current value being checked as the square root.
 * Return: The square root of n or -1 if n has no natural square root.
 */
int _sqrt(int n, int i)
{
	if (n < 0)
		return (-1);

	if ((i * i) > n)
		return (-1);

	if (i * i == n)
		return (i);

	return (_sqrt(n, i + 1));
}
