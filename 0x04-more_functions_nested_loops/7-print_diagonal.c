#include "main.h"
/**
 * print_diagonal - draw a diagonal line on the terminal
 *by using the _putchar function to print
 *@n: where n is the number of times the character '\' should be printed
 *the diagonal should end with a '\n'.
 *if n is 0 or less, the function should onluy print '\n'.
 */
void print_diagonal(int n)
{
int i, j;
{
if (n <= 0)
{
_putchar('\n');
return;
}

for (i = 1; i <= n; i++)
{
for (j = 1; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
}
