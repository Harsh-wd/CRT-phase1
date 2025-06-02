#include<iostream>
using namespace std;

////single level
//parent//base //super
class Sun
{
public:
        void java()
        {
            cout<<"java prog..."<<endl;
        }
};

//child//derived//sub

class oracle : public Sun  //inheritence
{
public:
        void dbms()
        {
            cout<<"sql..."<<endl;      rg5tb
        }
};
int main()
{
    oracle obj;

    obj.dbms();
    obj.java();
}
