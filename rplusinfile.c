#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
    FILE *fp=NULL ;
    char ch;
    //char str[20];
    fp=fopen("ahsan.txt","w+");
    if(fp==NULL)
    {
        printf("error");
        exit(1);
    }

    fputc("A",fp);
    rewind(fp);
    while(!feof(fp)){
        //fgets(str,5,fp);
        ch=fgetc(fp);
        printf("%c",ch);

    }

   
    fclose(fp);
    
}