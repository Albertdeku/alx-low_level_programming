#include "main.h"
#include <stdio.h>
/**
* print_line - prints a line
* Return: (breaks)
* @n: value
*/
void print_line(int n)
{
	int i;

if (n <= 0)
{
_putchar('\n');
return;
}
for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
