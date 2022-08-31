#include <stdio.h>
/* main - Main function
 * 
 * Description: All combinations of single digit numbers
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

		if (ascii == 58)
		{
			continue;	
		}

		putchar(',');
		putchar(' ');

	}
	putchar('\n');
	return (0);
}
