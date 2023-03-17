#include <stdio.h>
/**
 * main - program that prints the alphabet in lowercase
 * Return: Always (Success)
 */
int main(void)
{
int i = 0;
while (i < 10)
{
putchar(i + '0');
i++;
}
putchar('\n');
return (0);
}
