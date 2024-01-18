#include<stdio.h>

int sum(void);

void main()
{
    int s;
    s= sum();
    printf("sum is =%d\n",s);
}

int sum()
{
    int a,b,sum=0;
    printf("Enter the numbers:");
    scanf("%d%d",&a,&b);
    sum=a+b;
   // return 'a','0','1';
    return sum;
}


