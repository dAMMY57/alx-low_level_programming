#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible different combinations of three digits in
 * ascending order, separated by a comma and a space.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int digit1, digit2, digit3;

for (digit1 = 0; digit1 <= 7; digit1++)
{
for (digit2 = digit1 + 1; digit2 <= 8; digit2++)
{
for (digit3 = digit2 + 1; digit3 <= 9; digit3++)
{
putchar(digit1 + '0');   /* Print the first digit */
putchar(digit2 + '0');   /* Print the second digit */
putchar(digit3 + '0');   /* Print the third digit */

if (digit1 != 7 || digit2 != 8 || digit3 != 9)
{
putchar(',');  /* Print comma */
putchar(' ');  /* Print space */
}
}
}
}

putchar('\n'); /* Print newline character */

return (0); /* Return 0 to indicate successful execution */
}
