#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
    FILE *fp ;
    //char ch='a';
    char str[20]="ahsan habib";
    fp=fopen("ahsan.txt","a");
    if(fp==NULL)
    {
        printf("error");
        exit(1);
    }

    while(!feof(fp)){
        fgets(str,5,fp);
        printf("%s",str);

    }

   /* while (!feof(fp))
    {
        ch=fgetc(fp);
        printf("%c",ch);
    }*/
    fclose(fp);
    
}