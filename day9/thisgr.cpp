#include<iostream>
using namespace std;

class thisd
{
public:
        int var1,var2;
        thisd(int x,int y)
        {
            this->var1=x;
            this->var2=y;
        }
        void display()
        {
            if(var1==var2)
            {
                cout<<"\n both are equal"<<endl;
            }
            else if(var1>var2)
            {
                cout<<"\n var1 is greater"<<endl;
            }
            else if(var2>var1)
            {
                cout<<"\n var2 is greater"<<endl;
            }
        }
};
int main()
{
    thisd obj(10,5);
    obj.display();
}