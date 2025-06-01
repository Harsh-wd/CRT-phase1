#include<iostream>
using namespace std;

class language
{
    public:
            void func1()
            {
                cout<<"c lan"<<endl;
            }
            void func2()
            {
                cout<<"c++ lan"<<endl;
            }
            void func3()
            {
                cout<<"java"<<endl;
            }
};
int main()
{
    language obj;
    obj.func1();
    obj.func2();
}