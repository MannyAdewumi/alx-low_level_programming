#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: parameter 1
 * @n: parameter 2
 * @src: parameter 3
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c;

	for (c = 0 ; c < n ; c++)
		dest[c] = src[c];
	return (dest);
}
