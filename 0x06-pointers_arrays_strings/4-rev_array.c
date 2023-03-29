#include "main.h"
/**
* _strcmp - Concatenating tow strings
* @n: integer
* @a: pointer to the second string
* Return: address of the pointer
*/
void reverse_array(int *a, int n)
{
	int temp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		temp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = temp;
	}
}
