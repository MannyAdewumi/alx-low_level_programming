#include "main.h"
/**
 *argstostr - concatenate function
 *@ac: arguement count
 *@av: arguement vector
 *Return: pointer to string
 */

char *argstostr(int ac, char **av)
{
	int i, j, k = 0;
	int count = 0;
	char *output;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			count++;
		count++;
	}
	output = malloc(sizeof(char) * count + 1);
	if (output == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			output[k] = av[i][j];
			k++;
		}
		output[k++] = '\n';
	}
	output[k] = '\0';
	return (output);
}
