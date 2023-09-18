#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @n: The integer to compute the absolute value of
 *
 * Return: The absolute value of n
 */
int _abs(int n)
{
if (n < 0)
{
return (-n); /* Return the negation of n if n is negative */
}
else
{
return (n); /* Return n as is if n is non-negative */
}
}
