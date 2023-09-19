#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program calculates and prints the first 98
 * Fibonacci numbers, separated by a comma and a space.
 *
 * Return: Always 0 (Success) - The program terminates successfully.
 */
int main(void)
{
unsigned long int fib1 = 1, fib2 = 2, next;
int count = 0;

printf("%lu, %lu", fib1, fib2);

 while (count < 96)
{
next = fib1 + fib2;
printf(", %lu", next);

fib1 = fib2;
fib2 = next;
count++;
}

printf("\n");

return (0);
}
