#include <stdio.h>
/**
 * main -  prints all possible combinations of two two-digit numbers.
 * Return: Always (Success)
 */
int main(void)
{
int i, j;
for (i = 0; i < 100; i++)
{
for (j = i; j < 100; j++)
{
if (i != j)
{
putchar('0' + (i / 10));
putchar('0' + (i % 10));
putchar(' ');
putchar('0' + (j / 10));
putchar('0' + (j % 10));
if (i != 99 || j != 98)
{
putchar(',');
putchar(' ');
}
}
}
}
return (0);
}
