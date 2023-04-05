#include "main.h"
/**
wildcmp - Compare two strings with wildcard patterns
@s1: first string
@s2: second string, may contain wildcard characters
Return: 1 if the strings match, 0 otherwise
*/
int wildcmp(char *s1, char s2)
{
/ If the first string is empty... /
if (s1 == '\0')
{
/ ...and the second string is not empty and starts with '', recursively call wildcmp with s2+1 */
if (s2 != '\0' && s2 == '')
return (wildcmp(s1, s2 + 1));
/ ...otherwise, return true if the second string is also empty */
return (*s2 == '\0');
}
/* If the second string starts with a '*', recursively call wildcmp with s1+1 and s2, or s1 and s2+1 /
if (s2 == '')
return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
/ If the current characters in s1 and s2 match, recursively call wildcmp with s1+1 and s2+1 */
else if (*s1 == s2)
return (wildcmp(s1 + 1, s2 + 1));
/ Otherwise, the strings don't match */
return (0);
}
