#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,m,i,*ptr;
    printf("Enter the no of elements :");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));

    printf("Enter the values:");
    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }

    printf("New no of elements :");
    scanf("%d",&m);

    int *newPtr=(int*)realloc(ptr,m*sizeof(int));
    if(newPtr!=NULL){
        ptr=newPtr;
        printf("\nPrevious address=%d, new address=%d",ptr,newPtr);
        
        printf("Enter the values:");
        for(i=n;i<m;i++)
        {
            scanf("%d",(ptr+i));
        } 

        printf("\nThe entered values are:");
        for(i=0;i<m;i++)
        {
            printf("%d\t",*(ptr+i));
        }
    }
    else{
        printf("error");
    }
    free(ptr);

}