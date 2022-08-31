#include <stdio.h>
/**
 * main - Main function
 *
 * Description: Prints single digit numbers of base 10
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ascii = 48;

	while (ascii <= 57)
	{
		putchar(ascii);
		ascii++;
	}

	putchar(10);
	return (0);
}
