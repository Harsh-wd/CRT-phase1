#include<iostream>
using namespace std;

//multilevel inheritence
class Sun
{
public:
        void java()
        {
            cout<<"java prog..."<<endl;
        }
};

class Google : public Sun
{
public:
    void android()
    {
        cout<<"android"<<endl;
    }
};

//child//derived//sub

class oracle : public Google
{
public:
        void dbms()
        {
            cout<<"sql..."<<endl;      
        }
};
int main()
{
    oracle obj;

    obj.dbms();
    obj.java();
    obj.android();
}
