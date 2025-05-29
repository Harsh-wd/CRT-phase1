#include<stdio.h>
#include<conio.h>
int main()
{
    ///////////////loops

    int i;    
    // for(i=1;i<=5;i++)
    // {
    //     printf("hello%d\n",i);
    // }
    /////if termination in for loop(it will give output not error)
    // for(i=1;i<=5;i++);
    // {
    //     printf("hello %d\n",i);
    // }
    ////decrement
    // for(i=5;i>=1;i--)
    // {
    //     printf("hello %d\n",i);
    // }

    /////define start and last position
    // int start,last;
    // printf("enter first position");
    // scanf("%d",&start);
    // printf("enter last position");
    // scanf("%d",&last);
    // for(i=start;i<=last;i++)
    // {
    //     printf("Hello%d\n",i);
    // }
    ////////// enter number and print number that times
    // int var;
    // printf("enter number");
    // scanf("%d",&var);
    // for(i=1;i<=var;i++)
    // {
    //     printf("%d",var);
    // }

    ///////skip number
    // for(i=1;i<=10;i++)
    // {
    //     if(i==5)
    //     {
    //         continue;;
    //     }
    //     else
    //     {
    //         printf("%d\n",i);
    //     }
    // }

    // for(i=1;i<=10;i++)
    // {
    //     if(i>5)
    //     {
    //         break;
    //     }
    //     else
    //     {
    //         printf("%d\n",i);
    //     }
    // }

    ////////print even and odd

    // for(i=1;i<=10;i++)
    // {
    //     if(i%2==0)
    //     {
    //         printf("even%d\n",i);
    //     }
    //     else if(i%2!=0)
    //     {
    //         printf("odd%d\n",i);
    //     }
    // }
/////////////////
    // int sum=0;
    // for(i=1;i<=5;i++)
    // {
    //     sum=sum+i;
    //     printf("%d",i);
    // }
    // printf("\n sum is %d",sum);

    ////////////patterns 

    // int r,c;
    // for(r=1;r<=5;r++)
    // {
    //     for(c=1;c<=5;c++)
    //     {
    //         printf("%d ",c);
    //     }
    //     printf("\n");
    // }
    
    // int r,c;
    // for(r=1;r<=5;r++)
    // {
    //     for(c=1;c<=5;c++)
    //     {
    //         printf("%d ",r);
    //     }
    //     printf("\n");
    // }

    // int r,c;
    // for(r=1;r<=5;r++)
    // {
    //     for(c=1;c<=9;c=c+2)
    //     {
    //         printf("%d ",c);
    //     }
    //     printf("\n");
    // }

    // int r,c;
    // for(r=9;r>=1;r=r-2)
    // {
    //     for(c=1;c<=5;c++)
    //     {
    //         printf("%d ",r);
    //     }
    //     printf("\n");
    // }

    /////////while loop
    // i=1;
    // int sum=0;
    // while(i<=5)
    // {
    //     printf("\n hello%d",i);
    //     sum=sum+i;
    //     i++;
    // }
    // printf("\n total %d",sum);

    //////how many character 
    // long a;
    // printf("enter number");
    // scanf("%d",&a);
    // int count =0;
    // while(a>0)
    // {
    //     count++;
    //     a=a/10;
    // }
    // printf("\n%d",count);

    ///sum of each character 
    int a;
    int s=0;
    int b;
    printf("enter number");
    scanf("%d",&a);
    while (a>0)
    {
        b=a%10;
        a=a/10;
        s=s+b;

        
    }
    printf("%d",s);
    return 0;
}