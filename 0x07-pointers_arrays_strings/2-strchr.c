#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @s: The string to search.
 * @c: The character to locate.
 *
 * Return: If the character is found, return a pointer to the first occurrence
 * of the character in the string. Otherwise, return NULL.
 */
char *_strchr(char *s, char c)
{
while (*s)
{
if (*s == c)
return (s);
s++;
}

if (c == '\0')
return (s);

return (0);
}
