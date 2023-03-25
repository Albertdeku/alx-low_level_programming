#include <stdio.h>
#include "main.h"
/**
* print_triangle - triagle form
* @size: the size of the square
* Return: 0 (Success)
*/
void print_triangle(int size)
{
	int i;
	int j, z;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < size; i++)
{
for (j = size - i; j > 1; j--)
{
_putchar(32);
}
for (z = 0; z <= i; z++)
{
_putchar(35);
}
_putchar('\n');
}
}
}
