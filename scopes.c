#include<stdio.h>
int a= 50;//program scope
int main()//function scope
{
    fun();
    //int a=22;
    {//block scope
        int a =44;
        printf("%d\n",a);
    }
    printf("%d",a);
}

void fun()//function scope
{
    int x=30;
    printf("%d\n",x);
}