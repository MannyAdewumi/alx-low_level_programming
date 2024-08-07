#include "function_pointers.h"
/**
 * array_iterator - repeats array
 * @array: function stores arrays
 * @size: size of array
 *@action: itterate array
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(*array);
		array++;
	}
}
