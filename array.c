#include<stdio.h>
//array in c

int main()

{
    int i, marks[5] = {80,34,68,50,54};
    /*marks[0]=85;
    marks[1]=80;
    marks[2]=70;
    marks[3]=45;
    marks[4]=50;*/

    marks[1]=75;
    for (i=0;i<5;i++)
    {
    printf(" Marks of the students =%d\n",marks[i]);
    }
    return 0;
}
