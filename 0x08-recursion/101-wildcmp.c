#include "main.h"

/**
 * wildcmp - Compares two strings.
 * @s1: A pointer to the first string.
 * @s2: A pointer to the second string.
 *
 * Return: If the strings can be considered identical, 1.
 * Otherwise, 0.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 != '\0' && *s2 == '*')
			return (wildcmp(s1, s2 + 1));
		return (*s2 == '\0');
	}

	if (*s2 == '*')
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	return (0);
}
