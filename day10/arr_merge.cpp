#include<iostream>
using namespace std;
class arr
{
public:
        void func()
        {
            int a[5],b[5],c[10],i;

            cout<<"enter elements first\n"<<endl;
            i=0;
            while(i<5)
            {
                cin>>a[i];
                i++;
            }
            cout<<"enter second\n"<<endl;
            i=0;
            while(i<5)
            {
                cin>>b[i];
                i++;
            }
            //merging
            for(i=0;i<10;i++)
            {
                if (i<5)
                {
                    c[i]=a[i];
                }
                else{
                    c[i]=b[i-5];
                }
            }
            cout<<"\n -----------merged--------\n";
            for(i=0;i<10;i++)
            {
                cout<<"\n"<<c[i];
            }
        }
};
int main()
{
    arr obj;
    obj.func();
}