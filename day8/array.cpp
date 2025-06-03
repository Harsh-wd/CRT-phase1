#include<iostream>
using namespace std;

class loop
{
public:
        void func()
        {
            int ar[5];
            int i;
            cout<<"enter elements in array\n";
            for(i=0;i<5;i++)
            {
                cin>>ar[i];
            }
            cout<<"\n--------Array elements--------"<<endl;
            for(i=0;i<5;i++)
            {
                cout<<ar[i]<<endl;
            }
        }
};
int main()
        {
            loop obj;
            obj.func();
        }