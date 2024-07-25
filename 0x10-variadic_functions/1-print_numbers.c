#include "variadic_functions.h"

/**
 * print_numbers - print numbers
 *@separator: string to be printed
 *@n: numbers to print
 *Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, a;

	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		a = va_arg(ptr, const unsigned int);
		printf("%d", a);

		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);
}
