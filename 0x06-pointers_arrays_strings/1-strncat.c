#include "main.h"
#include <stdio.h>
/**
* _strncat - Concatenating tow strings
* @dest: String destination
* @src: The source string
* @n: Number of bytes from src
* Return: address of the pointer
*/
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, len = 0;

	while (dest[index++])
		len++;
	for (index = 0; src[index] && index < n; index++)
		dest[len++] = src[index];
	return (dest);
}
