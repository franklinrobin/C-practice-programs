#include <stdio.h>
/**
 * main - Main function
 *
 * Description: Prints alphabets except 'e' and 'q'
 *
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int ascii = 97;

	while (ascii <= 122)
	{
		if (ascii != 101 && ascii != 113)
		{
			putchar(ascii);
		}
		ascii++;
	}
	return (0);
}
