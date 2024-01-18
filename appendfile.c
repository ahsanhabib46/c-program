#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
    FILE *fp ;
    //char ch='a';
    char str[20];
    fp=fopen("ahsan.txt","a");
    if(fp==NULL)
    {
        printf("error");
        exit(1);
    }

   printf("enter the content:");
   gets(str);

   fprintf(fp,"\n%s",str);
   printf("Successful");

  
    fclose(fp);
    
}