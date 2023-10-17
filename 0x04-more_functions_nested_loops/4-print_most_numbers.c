#include "main.h"
/**
 * print_most_numbers - prints the numbers from 0 - 9
 *excluding 2 and 4.
 *using the _putchar function to print the numbers in
 *characters, followed by new line at the end
 */
void print_most_numbers(void)
{
int num = 0;

while (num <= 9)
{
if (num != 2 && num != 4)
{
_putchar(num + '0');
}
num++;
}
_putchar('\n');

}
