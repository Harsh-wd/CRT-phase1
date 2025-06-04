#include<iostream>
using namespace std;

class swapt
{
public:
        int temp,var1,var2;
        swapt(int x,int y)
        {
            this->var1=x;
            this->var2=y;
        }
        void swap()
        {
            int temp=var1;
            var1=var2;
            var2=temp;
            cout<<"\n-------after swapping------\n";
            cout<<"value of var1: "<<var1<<endl;
            cout<<"value of var2: "<<var2<<endl;
        }
};
int main()
{
    swapt obj(10,5);
    obj.swap();
}