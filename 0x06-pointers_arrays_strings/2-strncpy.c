#include "main.h"

/**
* _strncpy - Concatenating tow strings
* @dest: String destination
* @src: The source string
* @n: Number of bytes from src
* Return: address of the pointer
*/
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, len = 0;

	while (src[index++])
	{
		len++;
	}
	for (index = 0; src[index] && index < n; index++)
	{
		dest[index] = src[index];
	}
	for (index = len; index < n; index++)
	{
		dest[index] = '\0';
	}
	return (dest);
}
