#include<iostream>
using namespace std;

//multiple inheritence
class Sun
{
public:
        void java()
        {
            cout<<"java prog..."<<endl;
        }
};

class Google
{
public:
    void android()
    {
        cout<<"android"<<endl;
    }
};

//child//derived//sub

class oracle : public Sun ,public Google // multiple inheritence
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
