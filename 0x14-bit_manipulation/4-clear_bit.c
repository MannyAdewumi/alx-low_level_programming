#include "main.h"

/**
 * clear_bit - set bit value to 0
 * @n: A pointer to change the bit value
 * @index: An index that clears a bit
 *
 * Return: 1 on success, -1 fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
