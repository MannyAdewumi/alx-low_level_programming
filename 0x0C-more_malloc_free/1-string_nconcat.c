#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1:string one
 * @s2:string two
 * @n:concatenated strings
 * Return: 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int s1len = 0;
	unsigned int s2len = 0;
	char *output;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		s1len++;
	for (i = 0; s2[i] != '\0'; i++)
		s2len++;

	output = malloc(sizeof(char) * (s1len + n) + 1);
	if (output == NULL)
		return (NULL);
	if (n >= s2len)
	{
		for (i = 0; s1[i] != '\0'; i++)
			output[i] = s1[i];
		for (i = 0; s2[i] != '\0'; i++)
			output[s1len + i] = s2[i];
		output[s1len + i] = '\0';
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			output[i] = s1[i];
		for (i = 0; i < n; i++)
			output[s1len + i] = s1[i];
		output[s1len + i] = '\0';
	}
	return (output);
}
