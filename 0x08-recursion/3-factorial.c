#include "main.h"

/**
 * calc_factorial - calculates the factorial of a given number using recursion.
 * @num: the number to calculate factorial of.
 *
 * Return: the factorial of the given number, or -1 if the number is negative.
 */

int factorial(int n)
{
	if (num < 0) // check if number is negative
	{
		return (-1); // return -1 if the number is negative
	}
	if (n == 0) // check if number is 0
	{
		return (1); // return 1 if the number is 0
	}
	return (n * factorial(num - 1)); // calculate factorial using recursion
}
