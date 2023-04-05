#include "main.h"

/**
 * tmp_prime - checks if a number is prime
 * @n: number to check
 * @i: divisor
 *
 * Return: 1 if prime, 0 otherwise
 */
int tmp_prime(int n, int i)
{
	if (n % i == 0)
		return (0);
	if (i * i > n)
		return (1);
	return (tmp_prime(n, i + 2));
}

/**
 * divisors - checks if a number is prime
 * @n: number to check
 * @m: divisor
 *
 * Return: 1 if prime, 0 otherwise
 */
int divisors(int n, int m)
{
	if (m % n == 0)
		return (0);
	else if (m / 2 > n)
		return (divisors(n + 2, m));
	else
		return (1);
}

/**
 * is_prime_number - checks if a number is prime
 * @n: number to check
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if ((!(n % 2) && n != 2) || n < 2)
		return (0);
	else
		return (tmp_prime(n, 3));
}
