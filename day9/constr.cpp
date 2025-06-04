#include<iostream>
using namespace std;

class JECRC
{
public:
        JECRC()
        {
            int x=10;
            int y=8;

            cout<<"\n Value of x:"<<x<<endl;
            cout<<"value of y:"<<y<<endl;

            cout<<"\n\n------After swapping-----\n";
            int temp=x;
            x=y;
            y=temp;

            cout<<"value of x:"<<x<<endl;
            cout<<"value of y"<<y<<endl;
        }
};
int main()
{
    JECRC con;
}