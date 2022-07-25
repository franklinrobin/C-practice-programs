#include <stdio.h>
/**
 * main  - checks teh adress of variables in memory
 * Return: 0
 */

int main(void)
{
	int n;
	char c;

	printf("The location of 'c' is: %p\n", &c);
	printf("The location of 'n' is: %p\n", &n);

	return (0);
}
