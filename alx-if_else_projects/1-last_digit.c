#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Main funtion
 *
 * Description: Assigns random number and prints last digit
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
        int n, ln;

        srand(time(NULL));
        n = rand() - RAND_MAX/2;
	ln = n % 10;

	if (ln > 5)
		printf("The last digit of %d is %d and is greater than 5", n, ln);
	if (ln == 0)
		printf("The last digit of %d is %d and is 0", n, ln);
	if (ln < 6 && ln != 0)
		printf("The last digit of %d is %d and is less than 6 and not 0", n, ln);

        return (0);
}
