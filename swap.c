#include <stdio.h>
/*
Author: Frankline Kiptoo
Purpose: Swap the values of an interger using a function
*/
int swap(int*a, int *b);
int swap(int *a, int *b)
{
    int temp;
    
    temp = (*a);
    (*a) = (*b);
    (*b) = temp;
    
    return (0);
}

int main()
{
    int x, y;
    
    x = 10; 
    y = 20;
    
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    
    swap(&x, &y);
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    
    return (0);
    
    
}
