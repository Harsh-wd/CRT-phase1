#include<iostream>
using namespace std;

class loop
{
public:
        void func()
        {
            // int last,start;
            // cout<<"enter start position"<<endl;
            // cin>>start;
            // cout<<"enter last position"<<endl;
            // cin>>last;

            // for(int i=start;i<=last;i++)
            // {
            //     cout<<i<<endl;
            // }

            int i=1;
            do
            {
                cout<<i<<endl;
                i++;
            } while (i>=5);
            
        }
};
int main()
{
    loop obj;
    obj.func();
}