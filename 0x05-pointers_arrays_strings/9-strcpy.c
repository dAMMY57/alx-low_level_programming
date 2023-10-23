#include "main.h"
#include <stdio.h>
/**
 * _strcpy - Copies a string, including the null byte, from src to dest.
 * @dest: The buffer to copy the string to.
 * @src: The string to be copied.
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strcpy(char *dest, char *src)
{
int i;

for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';

return (dest);
}
