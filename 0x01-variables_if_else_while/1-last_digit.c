#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Prints The last digit
 * Return: Always (Success)
 */
int main(void)
{
int n, last_digit;
srand(time(0));
n = rand() - RAND_MAX / 2;
last_digit = n % 10;
printf("Last digit of %d is ", n);
if (last_digit > 5)
{
printf("and is greater than 5\n");
}
else if (last_digit == 0)
{
printf("and is 0\n");
}
else
{
printf("and is less than 6 and not 0\n");
}
return (0);
}