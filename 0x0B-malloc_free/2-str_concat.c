#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings.
 * @s1: input to string 1
 * @s2: input to string 2
 * Return: NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
        int a = 0, b = 0;
        int i, j;
        char *s;

        if (s1 == NULL)
                s1 = "";
        if (s2 == NULL)
                s2 = "";

        /* Find length of s1 and s2 */
        while (s1[a] != '\0')
                a++;
        while (s2[b] != '\0')
                b++;

        /* Allocate memory for the concatenated string (+1 for end of string character) */
        s = malloc((a * sizeof(char)) + ((b + 1) * sizeof(char)));
        if (s == NULL)
                return (NULL);

        /* Add the first string to the s array */
        for (i = 0; s1[i] != '\0'; i++)
                s[i] = s1[i];

        /* Add the second string to the s array */
        for (j = 0; s2[j] != '\0'; j++)
        {
                s[i] = s2[j];
                i++;
        }

        /* Null-terminate the concatenated string */
        s[i] = '\0';

        return (s);
}
