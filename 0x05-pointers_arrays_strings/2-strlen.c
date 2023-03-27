#include <stdio.h>
/**
 *_strlen - cheack the length of a string
 * @str: the string
 * Return: the length of the string
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);
}
