#include "main.h"
/**
 * swap_int - swaps the values of two integers
 *@a: Pointer to the first integer
 *@b: Pointer to the second integer
 *
 *Description: This functio takes two integer pointers as parameters
 *and swaps the values of the integers they point to.
 */
void swap_int(int *a, int *b)
{
int swap;

swap = *a;

*a = *b;

*b = swap;
}
