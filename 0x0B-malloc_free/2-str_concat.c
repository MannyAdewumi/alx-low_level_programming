#include "main.h"
/**
 *str_concat- function to concatenate strings
 *@s1:string 1
 *@s2:string 2
 *Return: points to new space
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int s1len = 0;
	int s2len = 0;
	char *res;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		s1len++;
	for (i = 0; s2[i] != '\0'; i++)
		s2len++;
	res = malloc(sizeof(char) * (s1len + s2len) + 1);

	if (res == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		res[i] = s1[i];
	for (i = 0; s2[i] != '\0'; i++)
		res[s1len + i] = s2[i];
	return (res);
}
