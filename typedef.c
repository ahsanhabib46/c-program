#include<stdio.h>

typedef struct student stu ;// global declaration of new named datatype for old datatype


/*old datatype: 
typedef struct student
{
    int rollNo;
    char name[20];
    float marks;

}stu;*///stu;//new named datatype for old datatype

struct student
{
    int rollNo;
    char name[20];
    float marks;  
};
void main()
{
     stu S1;//= {1 , "Ahsan", 90.5};
     stu S2;//= {2,"Habib",85.5};
    //S2=S1;

    printf("Info for first student:\n");
    scanf("%d %s %f",&S1.rollNo,S1.name,&S1.marks);

    printf("Info for second student\n");
    scanf("%d %s %f",&S2.rollNo,S2.name,&S2.marks);

    printf("Info for first student:\n");
    printf("Roll:%d Name:%s Marks:%.3f\n\n",S1.rollNo,S1.name,S1.marks);

    printf("Info for second student\n");
    printf("Roll:%d Name:%s Marks:%.3f",S2.rollNo,S2.name,S2.marks);
    printf("\n\n");
}
