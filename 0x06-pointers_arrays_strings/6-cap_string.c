/**
 * cap_string - Capitalize all words of a string
 * @str: The input string
 *
 * Return: A pointer to the modified string
 */
char *cap_string(char *str)
{
char *ptr = str;
int cap_next = 1;

while (*str)
{
if (cap_next && (*str >= 'a' && *str <= 'z'))
{
*str -= 32;
cap_next = 0;
}

if (*str == ' ' || *str == '\t' || *str == '\n' || *str == ',' ||
*str == ';' || *str == '.' || *str == '!' || *str == '?' ||
*str == '"' || *str == '(' || *str == ')' || *str == '{' ||
*str == '}')
{
cap_next = 1;
}

str++;
}

return (ptr);
}
