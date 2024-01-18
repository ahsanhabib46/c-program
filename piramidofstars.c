#include<stdio.h>

void main()
{
    int i,j,k,rows;
    printf("Enter the no of rows: ");
    scanf("%d",&rows);

    for (i=1;i<=rows;i++)
    {
        for(k=1;k<=(rows-i);k++)
        {
            printf(" ");
        }
       // for(j=1;j<=i;j++)
        for(j=1;j<=(2*i-1);j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    

}