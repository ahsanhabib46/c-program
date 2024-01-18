#include<stdio.h>
void display();
//we can declare static global as well
static char ch='A';

void main()
{
    display();
    display();
    printf("The character is =%c ",ch);
}

void display()
{//only one time initialization
    static int a;//hold the value for second, not be initialized again
    int b=11;
    b--;//first use the previous value then decrement
    //after decrement b=10
    a=a+20;//a=a+20;
    printf("The value of a is = %d\n",a);
    printf("The value of b is = %d\n",b);
    
}