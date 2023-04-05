#include "main.h"

/**
 * calc_factorial - calculates the factorial of a given number using recursion.
 * @num: the number to calculate factorial of.
 *
 * Return: the factorial of the given number, or -1 if the number is negative.
 */

int calc_factorial(int num)
{
	if (num < 0) // check if number is negative
	{
		return (-1); // return -1 if the number is negative
	}
	if (num == 0) // check if number is 0
	{
		return (1); // return 1 if the number is 0
	}
	return (num * calc_factorial(num - 1)); // calculate factorial using recursion
}
