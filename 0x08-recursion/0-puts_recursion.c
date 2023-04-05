#include "main.h"

/**
 * recursive_puts - prints a string recursively.
 * @s: pointer to char
 * Returns: nothing
*/
void recursive_puts(char *s)
{
    if (*s != '\0')
    {
        _putchar(*s);
        recursive_puts(s + 1);
    }
    else
    {
        _putchar('\n');
    }
}
