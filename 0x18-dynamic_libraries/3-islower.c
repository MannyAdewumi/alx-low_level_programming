#include "main.h"
/**
 *_islower - function to print lower c
 * Return: 1 or 0
 * @c: parameter to be checked
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
