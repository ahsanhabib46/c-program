#include<stdio.h>
//#include"extern2.c"
void display()
{
    extern int x;
    int y=5;
    x++;
    y++;
    printf("The value of x is= %d\n",x);
    printf("The value of y is= %d\n",y);

}