#include<stdio.h>
#include<conio.h>
int main()
{

    // int var;
    // printf("enter your age\n");
    // scanf("%d",&var);
    // if(var>=18)
    // {
    //     printf("valid");
    // }
    // else{
    //     printf("not valid");
    // }


    //to print ascii values of charcters and keys

    // char var;
    // printf("enter charcter\n");
    // scanf("%c",&var);
    // printf("\n");
    // printf("charcter %c ASCII %d",var,var);

    //keyboard 

    // char var;
    // printf("enter any key\n");
    // scanf("%c",&var);
    // if((var>=65 && var<=90) || (var>=97 && var<=112))
    // {
    //     printf("you have enterd alphabetical key %c",var);
    // }
    // else if((var>=48 && var<=57))
    // {
    //     printf("you have entered numeric key %c",var);
    // }
    // else if(var==10)
    // {
    //     printf("ENTER KEY");

    // }
    // else if(var==32)
    // {
    //     printf("SPACE KEY");
    // }

    //calcutor

    int var1=10;
    int var2=3;
    int res;
    int ch;

    printf("press 1 for addition\n");
    printf("press 2 for subtraction\n");
    printf("press 3 for multiply\n");
    printf("press 4 for division\n");
     
    printf("\n enter choice \n");
    scanf("%d",&ch);

    switch (ch)
    {
    case  1:
        res=var1+var2;
        printf("add :%d",res);
        break;
    case 2:
        res=var1-var2;
        printf("sub: %d",res);
        break;
    case 3:
        res=var1*var2;
        printf("mul: %d",res);
        break;
    case 4:
        res=var1/var2;
        printf("div: %d",res);
        break;
    
    default:
        printf("\n invalid");
        
    }
    return 0;
    
}