#include "main.h"
/**
* _strcmp - Concatenating tow strings
* @s1: Pointer to the first string
* @s2: pointer to the second string
* Return: address of the pointer
*/
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
