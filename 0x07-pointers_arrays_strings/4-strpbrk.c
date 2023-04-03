#include "main.h"

/**
 * _strpbrk - This function searches a string for any of a set of bytes.
 *
 * @str: The string to search in.
 *
 * @chars: The set of bytes to match.
 *
 * Return: A pointer to the byte in the string.
 */
char *_strpbrk(char *str, char *chars)
{
	int i;
	while (*str)
	{
		for (i = 0; chars[i]; i++)
		{
			if (*str == chars[i])
				return (str);
		}
		str++;
	}
	return (NULL);
}
