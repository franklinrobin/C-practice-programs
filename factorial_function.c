#include <stdio.h>
/*
factrorial using function
*/
int fact(int input);
void main()
{
    int numb_1, numb_2;
    
    printf("Enter numb_1: ");
    scanf("%d", &numb_1);
    
    printf("Enter numb_2: ");
    scanf("%d", &numb_2);
    
    printf("The factorial of %d is %d\n", numb_1, fact(numb_1));
    printf("The factorial of %d Is %d\n", numb_2, fact(numb_2));
}

int fact(int input)
{
    int i, fact = 1;
    
    for (i = 1; i <= input; i++)
    {
        fact = fact*i;
    }
    return (fact);
}
