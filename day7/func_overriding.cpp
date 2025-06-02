#include<iostream>
using namespace std;

class Sun
{
public:
        void java()
        {
            cout<<"java prog..."<<endl;
        }
        void clang()
        {
            cout<<"c lang by sun base class\n"; /// overridden function
        }
};

//child//derived//sub

class oracle : public Sun
{
public:
        void dbms()
        {
            cout<<"sql..."<<endl;      
        }
        void clang()
        {
            cout<<"c lang by oragle derived class\n";  ///overriding function
        }
};
int main()
{
    oracle obj;

    obj.dbms();
    obj.java();
    obj.clang();
}
