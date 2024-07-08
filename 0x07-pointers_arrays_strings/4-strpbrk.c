#include"main.h"
/**
 *_strpbrk - search forbytes in string
 *@s: parameter one
 *@accept: where to search
 *Return: NULL or accept
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		const char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
				return (s);
			a++;
		}
		s++;
	}
	return (NULL);
}
