#include<stdio.h>
int main()
{
    int ar[5];
    int *ptr;
    int sum=0;
    int i;

    printf("enter elements in array\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&ar[i]);
    }
    printf("\n----------array----------\n");
    for(i=0;i<5;i++)
    {
        printf("\n Value of %d",ar[i]);
        printf("\t Address= %d",&ar[i]);
    }

    printf("\n---------pointer--------\n");
    
    for(i=0;i<5;i++)
    {
        ptr=&ar[i];
        printf("\n Value of %d",*ptr);
        printf("\t address= %d",ptr);
        sum=sum+*ptr;
    }
    printf("\n\n sum of array using pointer %d",sum);
    
}