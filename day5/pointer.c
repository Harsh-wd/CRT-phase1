#include<stdio.h>
int main()
{
    int a=10;
    int *ptr;

    printf("value of variable a : %d\n",a);
    printf("address of variable a : %d",&a);

    printf("\n--------------------------\n");

    ptr=&a;
    printf("address of variable by pointer : %d\n",ptr);
    printf("value of variable by pointer : %d",*ptr);

}