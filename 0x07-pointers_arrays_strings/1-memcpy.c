#include "main.h"

/**
 *_memcpy - Entry point
 * @dest: input
 * @src : input
 * @n : input
 * Return : Always(Success)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
	dest[1] =  src[1];

return (dest);
}
