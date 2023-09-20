#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of single-digit numbers
 * separated by a comma and space.
 *
 * Return: Always 0 (Success)
 */ 
int main(void)
{
int num = 0;

while (num <= 9)
{
putchar(num + '0');/*print the digit*/
if (num < 9)
{
putchar(',');  /*print comma*/
putchar(' ');  /*print space*/
}
num++;
}

putchar('\n'); /* Print newline character*/

return (0);
}
