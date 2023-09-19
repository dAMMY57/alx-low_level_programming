#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, separated by a comma and space.
 *
 * Return: Always 0 (Success) - The program terminates successfully.
 */
int main(void)
{
long int fib1 = 1, fib2 = 2, next, i;

printf("%ld, %ld", fib1, fib2);

for (i = 2; i < 50; i++)
{
next = fib1 + fib2;
printf(", %ld", next);
fib1 = fib2;
fib2 = next;
}

printf("\n");

return (0);
}
