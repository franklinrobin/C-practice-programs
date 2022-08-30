#include <stdio.h>

/**
 * main - Main function
 *
 * Description: Prints alphabets in lower case then
 * in upper case
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int ascii = 97, ASCII = 65;

	while (ascii <= 122)
	{
		putchar(ascii);
		ascii++;
	}

	while (ASCII <= 90)
	{
		putchar(ASCII);
		ASCII++;
	}

	putchar(10);
	return (0);
}
