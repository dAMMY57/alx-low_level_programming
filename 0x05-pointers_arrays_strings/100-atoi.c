#include "main.h"

/**
* _atoi - Converts a string to an integer
* @s: The input string
*
* Return: The integer value
*/
int _atoi(char *s)
{
int sign = 1;
int result = 0;
int i = 0;
int num_start = 0;
/* Skip leading white spaces */
while (s[i] == ' ')
i++;

/* Check for the sign */
if (s[i] == '-')
{
sign = -1;
i++;
}
else if (s[i] == '+')
{
i++;
}

/* Calculate the integer value */

while (s[i])
{
if (s[i] >= '0' && s[i] <= '9')
{
num_start = 1;
result = result * 10 + (s[i] - '0');
}
else if (num_start)
{
break;
}
i++;
}

return (sign * result);
}
