
#include "main.h"

/**
 * print_last_digit - Prints the last digit of a num.
 * @n: The number to extract the last digit from
 *
 * Return: The value of the last digit
 */
int print_last_digit(int n)
{
int last_digit;

if (n < 0)
{
n = -n; /* Make sure n is positive */
}

last_digit = n % 10; /* Calculate the last digit */

_putchar('0' + last_digit); /* Print the last digit */

return (last_digit); /* Return the value of the last digit */
}
