#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
    FILE *fp ;
    char str[20];
    char ch;
    fp=fopen("ahsan.txt","a+");
    if(fp==NULL)
    {
        printf("error");
        exit(1);
    }

    fputs("national",fp);

    fseek(fp,2,SEEK_SET);
        ch=fgetc(fp);
        printf("The character is = %c\n",ch);

    fscanf(fp, "%s",str);
    printf("Pointer position = %d\n",ftell(fp));

    printf("The stirng is = %s\n",str);

    fseek(fp,-3,SEEK_CUR);
        ch=fgetc(fp);
        printf("The character is = %c\n",ch);
    fseek(fp,-7,SEEK_END);
        ch=fgetc(fp);
        printf("The character is = %c\n",ch);
    printf("Pointer position = %d",ftell(fp));    

    fclose(fp);
    
}