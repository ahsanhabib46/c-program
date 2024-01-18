#include<stdio.h>

void fun(int*,int*);

void main()
{
    int x=4 ,y=6;
    fun(&x,&y);
    printf("x= %d y= %d", x,y);

}

void fun(int* a ,int* b)
{

    *a=8;
    *b=10;
    printf("a= %d b= %d\n", *a,*b);
}