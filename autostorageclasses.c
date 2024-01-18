#include<stdio.h>
int a= 50;//program scope
int fun();
int main()//function scope
{
    int a=fun(40);
    printf("%d\n",a);
    // static int a=22;
    // {//block scope
    //    extern int a;
    //    printf("%d\n",a);
    // }
    // printf("%d",a);
}

int fun()//function scope
{
    static int x=30;
    //printf("%d\n",x);
    return x;
}