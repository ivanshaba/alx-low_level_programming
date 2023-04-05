#include "main.h"

/**
 * _strlen_recursion - returns the length of a string recursively
 * @s: pointer to string parameter
 *
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}

	return (1 + _strlen_recursion(++s));
}

/**
 * check_palindrome - checks if a string is a palindrome recursively
 * @s: pointer to string parameter
 * @l: length of the string
 *
 * Return: 1 if string is a palindrome, 0 if not
 */

int check_palindrome(char *s, int l)
{
	if (l < 1)
	{
		return (1);
	}

	if (*s == *(s + l))
	{
		return (check_palindrome(s + 1, l - 2));
	}

	return (0);
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: pointer to string parameter
 *
 * Return: 1 if string is a palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (check_palindrome(s, len - 1));
}
