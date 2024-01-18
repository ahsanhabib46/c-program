#include<stdio.h>
int* ret_ptr(int[]);

void main()
{
    int* ptr;
    int a[]={1,2,3,4,5};
    ptr = ret_ptr(a);
    printf("The value is = %d", *ptr);

}

int* ret_ptr(int b[])
{
    b = b+3;
    return b ;
}