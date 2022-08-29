#include<stdio.h>
/**
 * main - Main function
 *
 * Description: Prints the alphabet in lower case
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ascii;

	for (ascii = 97; ascii <= 122; ascii++)
		putchar(ascii);

	return (0);

}
