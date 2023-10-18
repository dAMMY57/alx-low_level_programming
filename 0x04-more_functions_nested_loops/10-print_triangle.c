#include "main.h"
/**
 * print_triangle - print a triangle, followed by a new line
 *by using _putchar function to print
 *@size: where size is the size of the triangle.
 *if size is 0 or less, the function should print only a new line
 *use the character # to print the triangle.
 */
void print_triangle(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int row, col;
for (row = 0; row < size; row++)
{
for (col = 0; col < size; col++)
{
if (col < size - row - 1)
{
_putchar(' ');
}
else
{
_putchar('#');
}
}
_putchar('\n');
}
}
}
