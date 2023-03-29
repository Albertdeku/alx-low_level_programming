#include <ctype.h>
#include <string.h>
/**
* cap_string - Set the flag to capitalize the next letter
* @str: Pointer to character
* Return: 0 (Always)
*/
char *cap_string(char *str)
{
int capitalize = 1, i;

for (i = 0; str[i] != '\0'; i++)
{
if (isspace(str[i]) || str[i] == ',' || str[i] == ';' || str[i] == '.' ||
str[i] == '!' || str[i] == '?' || str[i] == '"' || str[i] == '(' ||
str[i] == ')' || str[i] == '{' || str[i] == '}') {
capitalize = 1;
}
else if (capitalize && isalpha(str[i]))
{
str[i] = toupper(str[i]);
capitalize = 0;
}
else
{
capitalize = 0;
}
}

return (str);
}
