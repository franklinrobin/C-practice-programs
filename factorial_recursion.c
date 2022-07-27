#include <stdio.h>
/*
Author: Frankline Kiptoo
Purpose: Print factorial of a number using funtion.
*/

int factorial(int n);
int main()
{
    int numb;
    
    printf("What is the number to compute?: ");
    scanf("%d", &numb);
    
    printf("The factorial of %d is %d\n", numb, factorial(numb));
    return (0);
}

int factorial(int n)
{
    if (n == 0)
    {
        return (1);
    }
    
    else
    {
        return n * factorial(n-1);
    }
}
