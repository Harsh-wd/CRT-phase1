#include<iostream>
using namespace std;

class RTUniversity
{
public:
        void btech()
        {
            cout<<"btech by rtu\n";
        }
        virtual void manager()=0; //declaration//overridden
        virtual void manager2()=0;  
};

class JECollge : public RTUniversity
{
public:
        void diploma() //override//definition
        {
            cout<<"self course";
        }
        void manager()
        {
            cout<<"RTu manager\n";
        }
        void manager2()
        {
            cout<<"rtu manager 2";
        }
};
int main()
{
    JECollge obj;
    obj.btech();
    obj.manager();
    obj.manager2();
}