#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse
 * Return: Always (Success)
 */
int main(void)
{
char c = 'z';
while (c >= 'a')
{
putchar(c);
c--;
}
putchar('\n');
return (0);
}
