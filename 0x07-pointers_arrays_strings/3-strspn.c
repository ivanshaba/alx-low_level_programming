#include "main.h"

/**
 * _strspn - function to get the length of a prefix substring
 *
 * @s: acts as  initial segment
 * @accept: consists of bytes
 *
 * Return: the number of bytes
*/
unsigned int _strspn(char *s, char *accept)
{
	int count = 0, i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
				{
					count++;
					break;
				}
			}
		}
		else
		{
			return count;
		}
	}
	return count;
}
