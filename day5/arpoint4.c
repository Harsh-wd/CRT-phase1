#include<stdio.h>
int main()
{
    int ar[3][3],r,c;
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
            if(ar[r][c]==10)
            {
                ar[r][c]==50;
            }
            else
            {
                ar[r][c]==10;
            }
        }
        printf("\n");
}
printf("%d\t",ar[r][c]);
}