#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
    FILE *fp ;
    int count=1;
    char ch;
    fp=fopen("ahsan.txt","a+");
    if(fp==NULL)
    {
        printf("error");
        exit(1);
    }

    for(ch=fgetc(fp);ch!=EOF;ch=fgetc(fp))
    {
        if(ch=='\n')
        {
            count=count+1;
        }
    }

    // while((ch=fgetc(fp))!=EOF)
    // {
    //      if(ch=='\n')
    //     {
    //         count=count+1;
    //     }
    // }

    fclose(fp);
    
    printf("Number of line in the file is = %d",count);

}