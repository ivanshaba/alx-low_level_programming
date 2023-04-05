#include "main.h"

/**
 * my_reverse_print - prints a string in reverse recursively.
 * @str: pointer to string parameter.
 *
 * Return: nothinig.
 */

void _print_rev_recursion(char *s)
{
    if (*s)
    {
        _print_rev_recursion(s + 1);
        _putchar(*s);
    }
}
