#include<stdio.h>
//function definition
void add(int a,int b)
{
    printf("The addition is (a+b) = %d ",a+b);
}
void sub(int a,int b)
{
    printf("The subtraction is(a-b) = %d",a-b);
}
void mul(int a,int b)
{
    printf("The Multiplication is(a*b) = %d",a*b);
}
void div(int a,int b)
{
    printf("The division is(a/b) = %d",a/b);
}
//using pointer function
void main(){
    void (*fptr[10])(int ,int) = {add,sub,mul,div};
    int x,y, choice;

    printf("Enter choice:\n 0 for addition \n 1 for subtraction \n 2 for Multiplication\n 3 for division\n So the choice is =");
    
    scanf("%d",&choice);

    if(choice>=4)
    {
        printf("Invalid choice");
    }
    else{
        printf("Valid choice\n");
        printf("Enter the numbers:");
        scanf("%d%d",&x,&y);
    }
    
        (fptr[choice])(x,y); //function calling using pointer function

}
