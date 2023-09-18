#include "main.h"
#include <limits.h>
/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number to extract the last digit from
 *
 * Return: The value of the last digit
 */
int print_last_digit(int n)
{
int last_digit;

if (n == INT_MIN)
{
last_digit = 8; /* Special case for INT_MIN */
}
else if (n < 0)
{
n = -n; /* Make sure n is positive for negative numbers */
last_digit = n % 10; /* Calculate the last digit */
}
else
{
last_digit = n % 10; /* Calculate the last digit for positive numbers */
}

_putchar('0' + last_digit); /* Print the last digit */
return (last_digit); /* Return the value of the last digit */
}
