#include <stdio.h>

// Define a structure
struct Student {
    char name[10];
    int age;
    float grade;
};

void main()
{
    struct Student Stu ={.age=20,.grade=5.00,.name="Ahsan"};
    printf("%s %d %.2f ",Stu.name,Stu.age,Stu.grade);
}