#include "main.h"
/**
 * swap_int - swaps integer
 *@a: function parameter
 *@b: parameter function
 *Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
