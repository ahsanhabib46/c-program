#include<stdio.h>

void display();

void main()
{
    int i;
    for(i=0;i<3;i++)
    {
        display();
    }
        
}

void display()
{
    static int x=5;
    int y=5;
    x++;
    y++;
    printf("The value of x is= %d\n",x);
    printf("The value of y is= %d\n",y);

}