#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: The number to check
 *
 * Return: 1 if n is greater than zero, 0 if n is zero, -1 if n is less than zero
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1); /* Return 1 if n is positive */
}
else if (n == 0)
{
_putchar('0');
return (0); /* Return 0 if n is zero */
}
else
{
_putchar('-');
return (-1); /* Return -1 if n is negative */
}
}
