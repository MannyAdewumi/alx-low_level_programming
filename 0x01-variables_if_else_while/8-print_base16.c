#include <stdio.h>
/**
 * main - main function
 * Return: 0 at success
 */

int main(void)
{
	int i;
	char j;

	for (i = 0 ; i < 10 ; i++)
		putchar(i);
	for (j = 'a' ; j <= 'f' ; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
