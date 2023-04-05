#include "main.h"

/**
 * my_reverse_print - prints a string in reverse recursively.
 * @str: pointer to string parameter.
 *
 * Return: nothinig.
 */
void my_reverse_print(char *str)
{
    if (*str)
    {
        my_reverse_print(str + 1);
        _putchar(*str);
    }
}
