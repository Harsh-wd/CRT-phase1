#include<iostream>
using namespace std;

class RTU
{
public:
        RTU()
        {
            cout<<"rtu constructor base class"<<endl;
        }
};
class JECRC : public RTU
{
public:
        JECRC()
        {
            cout<<"Jecrc constructor derived class"<<endl;
        }
};
int main()
{
    JECRC con;

}