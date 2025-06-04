#include<iostream>
using namespace std;

class thisp
{
public:
        int a;
        thisp(int z)
        {
            //cout<<"working";
           this->a=z;
        }
        void display()
        {
            cout<<"\n"<<a<<endl;
        }
};
int main()
{
    thisp obj(10);
    obj.display();
}