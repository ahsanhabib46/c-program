#include<stdio.h>

int main()
{
    //char ch='*';
    int i,j,row;
    printf("Enter the no of rows: ");
    scanf("%d",&row);

    for(i=1;i<=row;i++)
    {
        for(j=1;j<=i;j++)
        {
             printf("*");
             
        }
        printf("\n");
    }

    for(i=1;i<row;i++)
    {
        for(j=row-1;j>=i;j--)
        {
             printf("*");
             
        }
        printf("\n");
    }

}