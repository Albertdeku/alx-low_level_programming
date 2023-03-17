#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers
 * Return: Always (Success)
 */
int main(void)
{
int i, j;
for (i = 0; i < 10; i++)
{
for (j = i; j < 10; j++)
{
putchar(i);
putchar(',');
if (i != 9 || j != 9)
{
putchar(',');
}
}
}
return (0);
}
