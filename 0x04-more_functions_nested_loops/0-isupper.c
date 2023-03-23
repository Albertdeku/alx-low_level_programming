#include "main.h"
/**
* _isupper - Checks whether a letter is uppercased or not
* @c: Input
* Return: 0 (Success)
*/
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
