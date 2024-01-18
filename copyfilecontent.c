#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
    FILE *fp1,*fp2;
    char ch;
    fp1=fopen("ahsan.txt","r");
    if(fp1==NULL)
    {
        printf("error");
        exit(1);
    }
    fp2=fopen("ah.txt","w");
    if(fp2==NULL)
    {
        printf("error");
        exit(1);
    }
    while((ch=fgetc(fp1))!=EOF)
    {
        fputc(ch,fp2);

    }
    printf("copy done");

    fclose(fp1);
    fclose(fp2);
}    