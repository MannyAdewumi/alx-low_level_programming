#include "main.h"

/**
 * flip_bits - checks the number of bits to be changed
 * @n: start num
 * @m: end num
 * Return: the number of bits to be changed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int l, r = 0;
	unsigned long int prev;
	unsigned long int x = n ^ m;

	for (l = 63; l >= 0; l--)
	{
		prev = x >> l;

		if (prev & 1)
			r++;
	}
	return (r);
}
