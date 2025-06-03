#include<iostream>
using namespace std;

class loop
{
public:
        void func()
        {
            int ar[10];
            int i,old,newv;
            cout<<"enter elements in array\n";
            for(i=0;i<10;i++)
            {
                cin>>ar[i];
            }
            cout<<"enter old "<<endl;
            cin>>old;
            cout<<"enter new "<<endl;
            cin>>newv;
            
            cout<<"\n--------Array elements--------"<<endl;
            for(i=0;i<10;i++)
            {
                if(ar[i]==old)
                {
                    ar[i]=newv;
                }
                cout<<ar[i]<<endl;
            }
        }
};
int main()
        {
            loop obj;
            obj.func();
        }