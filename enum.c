#include<stdio.h>

enum xenum {c,cpp,java};
enum yenum {xenum};

void main()
{
    enum yenum a;
    printf("The SIZE = %d",sizeof(a));

}