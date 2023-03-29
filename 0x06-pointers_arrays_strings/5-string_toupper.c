#include "main.h"
/**
* string_toupper - function name
* @str: pointer to the character
* Return: address of the pointer
*/
char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		str[index] -= 32;
		index++;
	}
	return (str);
}
