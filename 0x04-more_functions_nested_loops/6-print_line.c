#include "main.h"
/**
 * print_line - draw a straight line in the terminal
 *by using the _putchar function to print
 *@n: where 'n' is the number of the times
 *the character '_' should be printed, followed by a
 *new line at the end of the line.
 *if 'n' is 0 or less, the function should only print '\n'
 */
void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int i;

for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
}
