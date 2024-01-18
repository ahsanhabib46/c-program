#include<stdio.h>

typedef enum {
    male,
    female,
    nutral,
}gender;

int main()
{
    gender var = nutral;
    printf("The size is =%d",var);
    return 0;
}