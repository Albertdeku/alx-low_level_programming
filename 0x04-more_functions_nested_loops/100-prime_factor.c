#include <stdio.h>
#include <math.h>
/**
* main - prints the largest prime factor
* Return: Always 0 (succes)
*/
int main(void)
{
	long x, max, number;
	double square;

	number = 612852475143;
	square = sqrt(number);

	for (x = 1; x <= square; x++)
	{
		if (number % x == 0)
		{
			max = number / x;
		}
	}
	printf("%ld\n", max);
	return (0);
}
