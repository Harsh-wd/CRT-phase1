#include<stdio.h>

struct student
{
    int sid;
    char name[20];
    float fees;
};

int main()
{
    struct student obj;
    printf("enter student id\n");
    scanf("%d",&obj.sid);

    printf("enter student name\n");
    fflush(stdin);   
    gets(obj.name);

    printf("enter courses fees\n");
    scanf("%f",&obj.fees);

    printf("-------student details------\n");
    printf("student id : %d\n",obj.sid);
    printf("\nstudent name: %s\n",obj.name);
    printf("\ncourse fees: %f",obj.fees);
}
