
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program calculates and prints the sum of
 * the even-valued terms in the Fibonacci sequence whose values
 * do not exceed 4,000,000.
 *
 * Return: Always 0 (Success) - The program terminates successfully.
 */
int main(void)
{
long int fib1 = 1, fib2 = 2, next, sum = 0;

while (fib2 <= 4000000)
{
if (fib2 % 2 == 0)
{
sum += fib2;
}

next = fib1 + fib2;
fib1 = fib2;
fib2 = next;
}

printf("%ld\n", sum);

return (0);
}
