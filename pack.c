#include <stdio.h>
#pragma pack(1)
// Define a structure
struct Student {
    char name[10];
    int age;
    float grade;
};

void main()
{
    struct Student Stu;
    printf("%d",sizeof(Stu));
}