#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){

    ////////////string
    char str1[20];
    char str2[20];
    int a;
    char res;
    
    printf("enter first value \n");
    gets(str1);

    printf("enter second\n");
    gets(str2);

    printf("\n");
    puts(str1);
    puts(str2);

    printf("\n----------\n");
    //strupr(str1);
    //strlwr(str1);
    //strrev(str1);
    //a=strlen(str1);
    //printf("%d",a);
    //strcat(str1,str2);

    res=strcmp(str1,str2);
    if(res==0)
    {
        printf("\n match");
    }
    else
    {
        printf("\n not match");
    }
    //puts(str1);
    


    //printf("\n %s",str1);
    //puts(str1);
    
}