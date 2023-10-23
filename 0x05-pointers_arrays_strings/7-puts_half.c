#include "main.h"

/**
 * _strlen - Calculate the length of a string
 * @str: The input string
 *
 * Return: The length of the string
 */
int _strlen(char *str)
{
int length = 0;

while (str[length] != '\0')
{
length++;
}

return (length);
}

/**
 * puts_half - Print the second half of a string
 * @str: The input string
 */
void puts_half(char *str)
{
int length = _strlen(str);
int start, i;

if (length % 2 == 0)
{
start = length / 2;
}
else
{
start = (length + 1) / 2;
}
    
for (i = start; i < length; i++)
{
 
 _putchar(str[i]);
}
_putchar('\n');
}
