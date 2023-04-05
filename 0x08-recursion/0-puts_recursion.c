#include "main.h"
/**
my_puts_recursion - recursively print a string.
@str: pointer to a character string.
Return: none.
*/
void _puts_recursion(char *str)
{
// Check if the current character is not the null terminator
if (*str != '\0')
{
// Print the current character and recursively call the function with the next character
_putchar(*str);
_puts_recursion(str + 1);
}
else
{
// If we've reached the end of the string, print a newline character
_putchar('\n');
}
}
