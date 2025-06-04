#include<iostream>
using namespace std;

class JECRC
{           ///////constructor overloading////////
public:
        JECRC()
        {
            cout<<"Non parameterised"<<endl;
        }
        JECRC(int a)
        {
            cout<<" single Parameterised"<<a<<endl;
        }
        JECRC(int x,int y)
        {
            cout<<"dual parameterised"<<endl;
        }
    
};
int main()
{
    JECRC con;
    JECRC con1(20); 
    JECRC con2(10,20);

}
