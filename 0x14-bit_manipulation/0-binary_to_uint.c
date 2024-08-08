#include "main.h"

/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: pointing to a string
 * Return: converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int ab = 0;

	if (!b)
		return (0);

	for (x = 0; b[x]; x++)
	{
		if (b[x] < '0' || b[x] > '1')
			return (0);
		ab = 2 * ab + (b[x] - '0');
	}
	return (ab);
}
