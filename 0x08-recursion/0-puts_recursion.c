#include "main.h"

/**
 * recursive_puts - prints a string recursively.
 * @s: pointer to char
 * Returns: nothing
*/
void _puts_recursion(char *s)
{
    if (*s != '\0')
    {
        _putchar(*s);
        _puts_recursion(s + 1);
    }
    else
    {
        _putchar('\n');
    }
}
