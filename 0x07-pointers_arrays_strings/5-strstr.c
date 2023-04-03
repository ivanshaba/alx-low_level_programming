#include "main.h"

/**
 * _strstr - This function locates a substring in a longer string.
 *
 * @string: The string to search in.
 *
 * @substr: The substring to search for.
 *
 * Return: A pointer to the beginning of the substring or @NULL if not found.
 */
char *_strstr(char *string, char *substr)
{
	unsigned int i = 0, j = 0;

	while (string[i])
	{
		while (substr[j] && (string[i] == substr[0]))
		{
			if (string[i + j] == substr[j])
				j++;
			else
				break;
		}
		if (substr[j])
		{
			i++;
			j = 0;
		}
		else
			return (string + i);
	}
	return (NULL);
}
