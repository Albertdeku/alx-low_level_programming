#include <stdio.h>
#include "main.h"
/**
* print_triangle - triagle form
* @i: value
* @j: value
* Return: 0 (Success)
*/
void print_triangle(int size)
{
	int i;
	int j;

if (size <= 0)
{
_putchar('\n');
return;
}
for (i = 1; i <= size; i++)
{
for (j = 1; j <= i; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
