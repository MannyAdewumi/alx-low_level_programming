#include "main.h"

/**
 * print_binary - number that prints a binary
 * @n: binary to be printed
 */

void print_binary(unsigned long int n)
{
	int na, mann = 0;
	unsigned long int new;

	for (na = 63; na >= 0; na--)
	{
		new = n >> na;

		if (new & 1)
		{
			_putchar('1');
			mann++;
		}
		else if (new)
			_putchar('0');
	}
	if (!new)
		_putchar('0');
}
