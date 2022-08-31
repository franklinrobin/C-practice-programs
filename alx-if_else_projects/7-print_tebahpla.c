#include <stdio.h>
/**
 * main - Main function
 *
 * Description: Prints lowercase alphabet in reverse
 *
 * Return: Always 0 (Succcess)
 */
int main(void)
{
	int ascii = 122;

	while (ascii >= 97)
	{
		putchar(ascii);
		ascii--;
	}

	putchar(10);
	return (0);
}
