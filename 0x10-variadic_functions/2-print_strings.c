#include "variadic_functions.h"

/**
 * print_strings - Prints a list of strings separated by a given separator.
 * @separator: The string separator to print between strings.
 * @n: The number of strings to print.
 * @...: The list of strings to print.
 *
 * Description: This function prints a given number of strings separated by a
 * specified separator. The strings are passed as variable arguments to the
 * function, using the C va_list mechanism. If a string in the list is NULL, the
 * string "(nil)" is printed instead. If the separator is NULL, an empty string
 * is used. The function prints a newline character at the end of the list.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
    char *str;
    unsigned int i;
    va_list ap;

    va_start(ap, n);

    /* If separator is NULL, use an empty string instead. */
    if (separator == NULL)
        separator = "";

    /* Loop over each string and print it, separated by the separator. */
    for (i = 0; i < n; i++)
    {
        str = va_arg(ap, char*);
        if (str == NULL)
            str = "(nil)";
        printf("%s", str);
        if (i < n - 1)
            printf("%s", separator);
    }

    printf("\n");
    va_end(ap);
}
