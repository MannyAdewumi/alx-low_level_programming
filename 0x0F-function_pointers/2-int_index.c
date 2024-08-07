#include "function_pointers.h"
/**
 * int_index - index of first element
 * @size: number of elements
 * @cmp: ponter to function
 * @array: stores numbers
 * Return: -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
