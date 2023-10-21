#include "main.h"
/**
 * rev_string - Reverses a string
 * @s: The string to reverse
 */
void rev_string(char *s)
{
int length = 0;
int start = 0;
int end = 0;
char temp;

 if (s == 0)
return;

while (s[length] != '\0')
length++;

end = length - 1;

while (start < end)
{
temp = s[start];
s[start] = s[end];
s[end] = temp;
start++;
end--;
}
}
