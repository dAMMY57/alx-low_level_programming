#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program finds and prints the sum of even Fibonacci
 * numbers that do not exceed 4,000,000.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
unsigned long int a = 1, b = 2, next;
int count;

printf("%lu, %lu, ", a, b);

for (count = 3; count <= 98; count++)
{
next = a + b;
printf("%lu", next);

if (count < 98)
printf(", ");
else
printf("\n");

a = b;
b = next;
}

return (0);
}

