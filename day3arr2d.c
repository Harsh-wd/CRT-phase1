#include<stdio.h>
#include<conio.h>
int main()
{
    /////declaration
    int ar[3][4],r,c,sum=0;
    int poscount=0,negcount=0;

    ///input
    printf("enter elements\n");
    for(r=0;r<3;r++)
    {
            for(c=0;c<4;c++)
            {
                scanf("%d",&ar[r][c]);
            }
    }


    /////output
    printf("\n array elements\n");
    for(r=0;r<3;r++)
    {
        for(c=0;c<4;c++)
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

            sum=sum+ar[r][c];
        }
        printf("\n");
    }
    printf("\n sum of array %d",sum);
    printf("\n positive no:%d",poscount);
    printf("\n negative no:%d",negcount);


}