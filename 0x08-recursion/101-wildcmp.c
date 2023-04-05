#include "main.h"

/**
 * wildcmp - Compares two strings for pattern matching
 * @s1: pointer to first string
 * @s2: pointer to second string
 * Return: 1 if the strings match, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
    if (*s1 == '\0')
    {
        while (*s2 == '*')
            s2++;

        return (*s2 == '\0');
    }

    if (*s2 == '*')
        return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));

    if (*s1 == *s2)
        return (wildcmp(s1 + 1, s2 + 1));

    return (0);
}
