#include<iostream>
using namespace std;

class reverse
{
public:
        void func()
        {
            int arr[r][c];
            int r,c;
            int i;
            
            cout<<"enter elements\n";
            for(i=0;i<5;i++)
            {
                cin>>arr[i];
            }
            for(i=5;i>=0;i--)
            {
                cout<<arr[i]<<" ";
            }

        }     
};
int main()
{
    reverse obj;
    obj.func();
}