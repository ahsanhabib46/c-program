#include<stdio.h>

int* sum(int*,int*); //declaration of function

void main()
{
    int addition=0;
    // int (*ptr)(int,int)= sum;
    // addition= ptr(4,5);
    int x =6, y=78; 
    //int (*ptr)(int,int)= &sum;
    addition= sum(&x,&y);
    printf("The Addition is : %d\n", addition);

    printf("ANSI =%d",__STDC__);

}

int* sum(int* a ,int* b) //definition of function
{   int *s;
    *a =4,*b=6;
    s= *a+*b;
    return s;

}