#include "main.h"
/**
 *_strdup - copies string to newly allocated memory
 *@str: string to copy
 *Return: pointer
 */

char *_strdup(char *str)
{
	char *cpy;
	int i;
	int count = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		count++;

	cpy = malloc(sizeof(char) * count + 1);
	if (cpy == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		cpy[i] = str[i];
	return (cpy);
}
