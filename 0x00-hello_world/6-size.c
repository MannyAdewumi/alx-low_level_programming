#include <stdio.h>
/**
 * main - main function
 * Return: 0 on success
 */

int main(void)
{
	char c;
	int i;
	double d;
	float f;
	long int a;
	long long int b;
	
	printf("Size of an int:%lu byte(s)\n", (unsigned long)sizeof(i));
	printf("size of a char:%lu byte(s)\n", (unsigned long)sizeof(c));
	printf("size of a float:%lu byte(s)\n", (unsigned long)sizeof(f));
	printf("size of a long int:%lu byte(s)\n", (unsigned long)sizeof(a));
	printf("size of a double:%lu byte(s)\n", (unsigned long)sizeof(d));
	printf("size of a long long int:%lu byte(s)\n", (unsigned long)sizeof(b));
	return (0);
}
