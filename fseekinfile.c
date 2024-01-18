#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
    FILE *fp ;
    //char ch='a';
    char ch;
    fp=fopen("ahsan.txt","w+");
    if(fp==NULL)
    {
        printf("error");
        exit(1);
    }

    fputs("national",fp);

    fseek(fp,2,SEEK_SET);
        ch=fgetc(fp);
        printf("%c\n",ch);

    fseek(fp,-3,SEEK_CUR);
        ch=fgetc(fp);
        printf("%c\n",ch);
    fseek(fp,-7,SEEK_END);
        ch=fgetc(fp);
        printf("%c",ch);

    fclose(fp);
    
}