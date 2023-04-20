#include "variadic_functions.h"

/**
 * sum_them_all - Calculates the sum of all the integers passed as arguments.
 * @n: The number of arguments passed.
 * @...: The variable list of integers to sum.
 *
 * Return: The sum of all the integers passed as arguments.
 */
int sum_them_all(const unsigned int n, ...)
{
    int sum = 0;
    unsigned int i;
    va_list ap;

    va_start(ap, n);

    /* If n is 0, there are no arguments to sum, so return 0. */
    if (n == 0)
        return (0);

    /* Loop over each argument and add it to the sum. */
    for (i = 0; i < n; i++)
        sum += va_arg(ap, int);

    va_end(ap);

    return (sum);
}
