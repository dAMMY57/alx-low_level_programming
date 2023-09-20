#include <stdio.h>

/**
 * main - prevents an infinite loop
 * Return: 0
 */
int main(void)
{
int i;

printf("Infinite loop incoming :(\n");

i = 0;

/* Commenting out the infinite loop
while (i < 10)
{
 putchar(i);
}
*/

printf("\nInfinite loop avoided! \\o/\n");

return (0);
}
