#include <stdio.h>
/*
 * Author: Frankline Kiptoo
 * Description: Prints the factorial of a given number
 */

int main()
{
    /*Variable declaration*/
    int input, i, fact = 1;
    
    /*Request input from the user*/
    printf("Kindly enter number to compute: ");
    scanf("%d", &input);
    /*Logic*/
    for (i = 1; i <= input; i++)
    {
        fact = fact * i;
    }
    /*Print result*/
    printf("The factorial of %d is %d", input, fact);
    return (0);
}
