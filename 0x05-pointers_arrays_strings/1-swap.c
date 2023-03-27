#include <stdio.h>
/**
 *swap_int - swap value from a to b
 *@a: first integer
 *@b: second integer
 *return: Always (0)
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
