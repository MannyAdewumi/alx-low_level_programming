#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *malloc_checked - function that checks assigned memory
 *@b: stores assigned memory
 *Return: pointer to memory
 */

void *malloc_checked(unsigned int b)
{
	char *xyz;

	xyz = malloc(b);
	if (xyz == NULL)
		exit(98);
	else
		return (xyz);
}
