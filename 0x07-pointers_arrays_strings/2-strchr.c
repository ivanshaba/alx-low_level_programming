#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @s: pointer to the string to search
 * @c: the character to locate
 *
 * Return: a pointer to the first occurrence of the character,
 *         or NULL if the character is not found
 */
char *_strchr(char *s, char c) {
    // Iterate through the string until the end ('\0') is reached
    for (; *s != '\0'; s++) {
        // If the current character matches the target character, return a pointer to it
        if (*s == c) return s;
    }
    // If the end of the string was reached and the target character is the null terminator, return a pointer to it
    if (*s == c) return s;
    // Otherwise, the target character was not found, so return NULL
    return NULL;
}
