#include<stdio.h>
#include<conio.h>

//function defining
void sum(int a , int b)
{ 
    int sum=0;
    //int a, b , sum = 0;
    //printf("Enter the numbers : ");
    //scanf("%d%d",&a,&b);
    sum = a+b;
    printf("sum is= %d\n",sum);
}

void sum(int , int); //function declaration

void main()
{
    int x=5 ,y=7;
    sum(x,y); // function calling
} 