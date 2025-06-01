#include<iostream>
using namespace std;

class poly
{
public:
        void area(int x)
        {
            cout<<"area of sq:"<<x*x<<endl;
        }
        void area(int a,int b)
        {
            cout<<"area of rec:"<<a*b<<endl;
        }
};
int main()
{
    poly obj;
    obj.area(10);
    obj.area(10,5);
}