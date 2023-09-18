#include "main.h"

/**
 * _islower - Checks if a character is lowercase
 * @c: The character to check
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);  /* Return 1 if c is lowercase */
}
else
{
return (0);  /* Return 0 if c is not lowercase */
}
}
