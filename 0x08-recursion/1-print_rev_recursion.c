#include "main.h"

/**
 * my_reverse_print - prints a string in reverse recursively.
 * @str: pointer to string parameter.
 * Return: nothing.
*/
void _print_rev_recursion(char *str)
{
    if (*str)
    {
        _print_rev_recursion(str + 1);
        _putchar(*str);
    }
}
