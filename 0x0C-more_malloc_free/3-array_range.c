#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *array_range - creates array of integers
 *@min:minimum value
 *@max:maximum value
 *Return: pointer to array
 */

int *array_range(int min, int max)
{
	int *output;
	int size;
	int i;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	output = malloc(sizeof(int) * size);
	if (output == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		output[i] = min++;
	return (output);
}
