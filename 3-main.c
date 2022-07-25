#include <stdio.h>

/**
 * main - prints out the adress stored
 * in a pointer and prints it out
 * Return: Always 0;
 */

int main(void)
{
	int *ptr, n = 40;

	ptr = &n;

	printf("The adress for 'n' is: %p\n", &n);
	printf("The value for 'ptr' is: %p\n", ptr);
	printf("The adress of 'ptr' is: %p", &ptr);
	return (0);

}
