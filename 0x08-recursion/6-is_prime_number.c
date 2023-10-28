#include "main.h"

/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
int i;

if (n <= 1)
return (0); /* 0 and 1 are not prime numbers */
else if (n <= 3)
return (1); /* 2 and 3 are prime numbers */
else if (n % 2 == 0 || n % 3 == 0)
return (0); /* Multiples of 2 or 3 are not prime */

i = 5;
while (i *i <= n)
{
if (n % i == 0 || n % (i + 2) == 0)
return (0); /* If n is divisible by i or i+2, it's not prime */
i += 6; /* Check numbers in the form 6k +/- 1 */
}

return (1); /* n is a prime number */
}
