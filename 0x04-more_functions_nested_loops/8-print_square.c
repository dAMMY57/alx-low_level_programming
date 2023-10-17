#include "main.h"
/**
 * print_square - print a square, followed by a new line
 *by using _putchar function to print
 *@size: where size is size of the square, if size is 0 or less
 *the function should print only a new line
 *use the # character to print the square.
 */
void print_square(int size)
{
int x, y;
if (size <= 0)
{
_putchar('\n');
return;
}
for (x = 1; x <= size; x++)
{
for (y = 1; y <= size; y++)
{
_putchar('#');
}
_putchar('\n');
}
}
