#include<stdio.h>

void sum(int a ,int b)
{
    printf("The sum is :%d\n",a+b);
}

void sub(int x,int b)
{
    printf("The Difference is: %d", x-b);
}
void main()
{
    display(sum);
    display(sub);
}
void display(void(*fptr)(int,int))
{
    fptr(8,9);
}
