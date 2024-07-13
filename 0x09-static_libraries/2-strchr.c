#include "main.h"
/**
 * _strchr - string character
 * @s: paramerter one
 * @c: parameter two
 *Return: s oor NULL
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
