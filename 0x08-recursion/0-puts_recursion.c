#include "main.h"
/**
 * *my_puts_recursion - recursively print a string.
 * *@str: pointer to a character string.
 * *Return: none.
*/
void _puts_recursion(char *str)
{
if (*str != '\0')
{
_putchar(*str);
_puts_recursion(str + 1);
}
else
_putchar('\n');
}
}
