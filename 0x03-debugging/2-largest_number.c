#include "main.h"

/**
* main - largest_number - returns the largest of 3 number
*@a: first integer
*@b: second integer
*@c: third integer
* Return : largest number
*/

int largest_number(int a, int b, int c)
{
int largest;

if ( a > b && c > b)

{
largest = a;
}
else if ( b > c && c > a)
{
largest = b;
}
else
{
largest = c;
}

return (largest);
}
