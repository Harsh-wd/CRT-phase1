#include<stdio.h>
int main()
{
    int i;
    int ar[5];
    int br[5];
    int *crptr;
    int cr[10];
    int *ptr,*ptr2;
    int sum=0;

    printf("enter elements in first\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&ar[i]);
    }

    printf("enter elements in second\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&br[i]);
    }

    printf("\n----------first-------\n");
    for(i=0;i<5;i++)
    {
        printf("\n Value of %d",ar[i]);
        printf("\t Address= %d",&ar[i]);
    }
    printf("\n----------second--------\n");
    for(i=0;i<5;i++)
    {
        printf("\n Value of %d",br[i]);
        printf("\t Address= %d",&br[i]);
    }

    printf("\n----------pointer----------\n");
    for(i=0;i<5;i++)
    {
        ptr=&ar[i];
        ptr2=&br[i];
        
        cr[i] = *ptr + *ptr2;
        crptr =&cr[i];
        printf("\n Value of %d",*crptr);
        printf("\t address= %d",crptr);
        
    }
}