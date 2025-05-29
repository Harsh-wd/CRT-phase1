#include<stdio.h>
#include<conio.h>
int main()
{
    ///////declaration
    // int ar[10] ,i,sum=0;
    // int evencount=0,oddcount=0;
    // int evensum=0,oddsum=0;

    int ar[5],br[5],cr[5],i;
    // ar[0]=10;
    // ar[1]=20;
    // ar[2]=30;
    // ar[3]=40;
    // ar[4]=50;

    // printf("\n array elements\n");

    //printf("%d",ar[3]);
    // printf("%d",ar[5]);///in c or c++ it will return garbage value if out of array range
    
    // for(i=0;i<5;i++)
    // {
    //     printf("\n%d",ar[i]);
    // }

    //////////user input

    printf("enter first set\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&ar[i]);
    }

    printf("enter second set\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&br[i]);
    }

    /////////process and output

    // printf("array elements");
    // for(i=0;i<5;i++)
    // {
    //     printf("\n%d",ar[i]);
    // }


    ///////(sum of array process)
    // for(i=0;i<5;i++)
    // {
    //     sum=sum+ar[i];
    // }
    // printf("sum of array elements : %d",sum);


    /////(even odd )
    // for(i=0;i<10;i++)
    // {
    //         if(ar[i]%2==0)
    //         {
    //             printf("\n even %d",ar[i]);
    //             evencount++;
    //             evensum=evensum+ar[i];
    //         }
    //         else
    //         {
    //             printf("\n odd %d",ar[i]);
    //             oddcount++;
    //             oddsum=oddsum+ar[i];
    //         }

    // }
    // printf("\n even number %d",evencount);
    // printf("\n odd number%d",oddcount);
    // printf("\n\n evensum%d",evensum);
    // printf("\n\n odd sum%d",oddsum);

    ////(sum of two array)

    for(i=0;i<5;i++)
    {
        cr[i]=ar[i]+br[i];
    }
    
    printf("\narray sum");
    for(i=0;i<5;i++)
    {
        printf("\n %d",cr[i]);
    }
    


    return 0;

}