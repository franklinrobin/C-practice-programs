#include <stdio.h>
/*
Author: Frankline Kiptoo
Description: sum of natural numbers
*/

int main()
{
    /*Variable declaration*/
    int inp, i, sum = 0;
    
    /*Get input*/
    printf("Kindly enter number to compute: ");
    scanf("%d", &inp);
    
    /*Logic*/
    for (i = 1; i <= inp; i++)
    {
        sum = sum + i;

        }
    printf("The sum of natural numbers of %d is %d", inp, sum);
    return (0);
}
