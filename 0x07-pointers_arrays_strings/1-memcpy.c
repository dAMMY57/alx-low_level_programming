#include "main.h"
/**
 * _memcpy - copies memory area
 *@dest: pointer to the destinstion memory area
 *@src: pointer to the source memory area
 *@n: number of byte to copy
 *
 *Return: a pointer to a destination memory area 'dest'
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{

dest[i] = src[i];
}
return (dest);
}
