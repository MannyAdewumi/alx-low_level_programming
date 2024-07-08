#include "main.h"
/**
 * _memset- sets memory
 * @s: function parameter 1
 * @b: function parameter 2
 * @n: function parameter 3
 * Return: 0 Always
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
		s[i] = b;
	return (s);
}
