#include<stdio.h>

int main()
{
    //char ch='*';
    int i,j,rows;
    printf("Enter the no of rows: ");
    scanf("%d",&rows);

   /* for(i=1;i<=rows;i++)
    {
        for(j=rows;j>=i;j--)
        {
             printf("%d ",j);
        }
        
        printf("\n");
    }*/
   // for(i=rows;i>=1;i--)
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }

}