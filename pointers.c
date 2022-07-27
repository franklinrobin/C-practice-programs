#include <stdio.h>
/*
Author: Frankline Kiptoo
Purpose: practicing pointers
*/
int main()
{
    int *p;
    int *q;
    int a = 10;
    int b = 20;
    p = &a;
    q = &b;
    
    printf("The value of a = %d\n", a);
    printf("The value of b = %d\n", b);
    printf("The size of a = %lu\n", sizeof(a));
    printf("The size of b = %lu\n", sizeof(b));
    printf("The adress of a = %p\n", &a);
    printf("The adress of b = %p\n", &b);
    printf("The value of p = %p\n", p);
    printf("The value of q = %p\n", q);
    printf("The size of p = %lu\n", sizeof(p));
    printf("The size of q = %lu\n", sizeof(q));
    printf("The adress of p = %p\n", &p);
    printf("The adress of q = %p\n", &q);
    printf("The value of a = %d\n", *p);
    printf("The value of b = %d\n", *q);
    
    return (0);
    
}
