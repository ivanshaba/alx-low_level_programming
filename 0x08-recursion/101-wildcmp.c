#include "main.h"
/**
wildcmp - Compare two strings for a match
@s1: pointer to first string
@s2: pointer to second string
Return: 0 on failure, 1 on success
*/
int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0')
{
if (*s2 != '\0' && s2 == '')
{
return (wildcmp(s1, s2 + 1));
}
return (*s2 == '\0');
}
