#include<stdio.h>
#include<stdlib.h>

int main()
{
    int m,n,i,*ptr1,*ptr2;
    printf("Enter the no of elements :");
    scanf("%d",&m);

    ptr1=(int*)calloc(m,sizeof(int));

    printf("Enter the values:");
    for(i=0;i<m;i++)
    {
        scanf("%d",(ptr1+i));
    }
    printf("Entered values are:\n");

    for(i=0;i<m;i++)
    {
        printf("%d\t", *(ptr1+i));
    }

    free(ptr1);
    ptr1=NULL;
    printf("\n");
    printf("Enter the no of elements :\n");
    scanf("%d",&n);

    ptr2=(int*)malloc(n*sizeof(int));

    printf("Enter the values:");
    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr2+i));
    }
    printf("Entered values are:\n");

    for(i=0;i<n;i++)
    {
        printf("%d\t", *(ptr2+i));
    }

    free(ptr2);
    ptr2=NULL;
    return 0;
}