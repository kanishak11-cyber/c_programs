//write a program to print the sum of two number using double pointer.

#include<stdio.h>
int main()
{
    int x,y,sum;
    int *a,**b,*c;
    printf("Enter 1st number : ");
    scanf(" %i",&x);
    printf("Enter 2nd number : ");
    scanf("%i",&y);
    a=&x;
    c=&y;
    b=&c;
    sum = *a+**b;
    printf("sum of %i + %i = %i",x,y,sum);
    return 0;
}
