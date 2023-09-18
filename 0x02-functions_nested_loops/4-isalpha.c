#include "main.h"

/**
 * _isalpha - Checks if a character is alphabetic
 * @c: The character to check
 *
 * Return:1 if c is an alphabetic character, 0 otherwise
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);  /* Return 1 if c is alphabetic */
}
else
{
return (0);  /* Return 0 if c is not alphabetic */
}
}
