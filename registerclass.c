#include<stdio.h>

void main()
{
    int data =10;
    int *pi =NULL;
    pi=&data;
    *pi=5;
    printf("%d",*pi);
}