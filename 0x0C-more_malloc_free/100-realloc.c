#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_realloc - reallocates memory
 *@ptr: pointer to old memory
 *@old_size:old size allocated
 *@new_size: new memory size
 *Return: new pointer to memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	char *old = ptr;
	size_t i, max = new_size;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);
		if (p == NULL)
			return (NULL);
	if (new_size > old_size)
		max = old_size;
	for (i = 0; i < max; i++)
		p[i] = old[i];
	free(ptr);
	return (p);
}
