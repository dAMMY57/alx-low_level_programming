#include "main.h"
/**
 * more_numbers - prints nmbers from 0-14, ten times
 *and uses _putchar function to print the numbers,
 *followed by new line at the end.
 */
void more_numbers(void)
{
int x, num;
for (x = 0; x <= 9; x++)
{
for (num = 0; num <= 14; num++)
{
if (num > 9)
{
_putchar((num / 10) + '0');
}
_putchar((num % 10) + '0');
}
_putchar('\n');
}
}
