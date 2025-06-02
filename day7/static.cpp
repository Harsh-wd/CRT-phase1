#include<iostream>
using namespace std;

class stex
{
public:
        static void func()
        {
            cout<<"function working"<<endl;
        }
};
int main()
{
    stex ::func(); //call from the class name

    stex obj;
    obj.func();  //call from obj name
}