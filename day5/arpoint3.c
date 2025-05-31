#include<stdio.h>
int main()
{
    int ar[3][3],r,c;
    int poscount=0,negcount=0;
    int p=0,n=0;
    int *ptr;



    printf("enter elements\n");
    for(r=0;r<3;r++)
    {
            for(c=0;c<3;c++)
            {
                scanf("%d",&ar[r][c]);
            }
    }
    printf("\n array elements\n");
    for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {
            printf("%d\t",ar[r][c]);
            if(ar[r][c]>=1)
            {
                poscount++;
            }
            else
            {
                negcount++;
            }
        }
        printf("\n");
    }
    printf("\n positive no:%d",poscount);
    printf("\n negative no:%d",negcount);

    printf("\n-----------pointer----------\n");
    for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {
            ptr=&ar[r][c];
            printf("%d\t",*ptr);
            if(*ptr>=1)
            {
                p++;
            }
            else
            {
                n++;
            }
        }
        printf("\n");
    }
    printf("\n positive no:%d",p);
    printf("\n negative no:%d",n);

}