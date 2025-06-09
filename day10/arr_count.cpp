#include<iostream>
using namespace std;

class pattern
{
public:
        void func()
        {
            int arr[3][3];
            int r,c;
            int count=0;
            cout<<"enter elements\n";
            for(r=0;r<3;r++)
            {
                for(c=0;c<3;c++)
                {
                    cin>>arr[r][c];
                }
            }
            cout<<"\narray format-----\n";
            for(r=0;r<3;r++)
            {
                for(c=0;c<3;c++)
                {
                    if(arr[r][c]%2!=0)
                    {
                        count++;

                    }
                }
                cout<<"odd"<<count;
            }
        }
};
int  main()
{
    pattern obj;
    obj.func();
}