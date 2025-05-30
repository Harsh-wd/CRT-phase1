#include<stdio.h>

/////////argument with return value////////////

// int sum(int a,int b);     //declaration

// int main()
// {
//     int x=10;
//     int y=20;
//     int z;

//     z=sum(x,y);     //calling
//     printf("\n total:%d",z);

// }
// int sum(int a,int b)    //defination
// {
//     int res=a+b;
//     return res;
// }


/////////// Argument with no return value /////////////
// void sum(int a,int b);

// int main(){
//     int x=10;
//     int y=20;
//     int z;
//     sum(x,y);
// }
// void sum(int a,int b)
// {
//     int res=a+b;
//     printf("total:%d",res);
// }


///// No argument with return value ///////

// int sum();
// int main()
// {
//     int z;
//     z=sum();
//     printf("total:%d",z);
// }
// int sum()
// {
//     int a=20;
//     int b=20;
//     int res=a+b;

//     return res;
// }


//////// NO argument with no return value/////////
void sum();
int main()
{
    int z;
    sum();
}
void sum()
{
    int a=20;
    int b=20;
    int res=a+b;

    printf("total:%d",res);
}
