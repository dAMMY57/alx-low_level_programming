#include "main.h"

/**
* is_prime_recursive - checks primality recursively
* @n: the number to check
* @divisor: the current divisor to test
*
* Return: 1 if n is prime, 0 otherwise
*/
int is_prime_recursive(int n, int divisor)
{
if (n <= 1)
return (0); /* 0 and 1 are not prime numbers */
if (n == 2)
return (1); /* 2 is prime */
if (divisor * divisor > n)
return (1); /* n is prime, no divisor found */
if (n % divisor == 0)
return (0); /* n is divisible by divisor, not prime */

return (is_prime_recursive(n, divisor + 1));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
return (is_prime_recursive(n, 2));
}
