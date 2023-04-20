#include "variadic_functions.h"

/**
 * print_numbers - Prints a list of integers separated by a given separator.
 * @separator: The string separator to print between integers.
 * @n: The number of integers to print.
 * @...: The list of integers to print.
 *
 * Description: This function prints a given number of integers separated by a
 * specified separator. The integers are passed as variable arguments to the
 * function, using the C va_list mechanism. If the separator is NULL, an empty
 * string is used. The function prints a newline character at the end of the
 * list.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
    unsigned int i;
    va_list ap;

    va_start(ap, n);

    /* If separator is NULL, use an empty string instead. */
    if (separator == NULL)
        separator = "";

    /* Loop over each integer and print it, separated by the separator. */
    for (i = 0; i < n; i++)
    {
        printf("%d", va_arg(ap, int));
        if (i < n - 1)
            printf("%s", separator);
    }

    printf("\n");
    va_end(ap);
}
