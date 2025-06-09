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
            cout<<"\n----------\n";
            for(r=0;r<3;r++)
            {
                for(c=0;c<3;c++)
                {
                    if(arr[r][c]%10==0)
                    {
                        cout<<arr[r][c]<<" ";
                        count++;
                    }
                    else
                    {
                        cout<<" ";
                    }
                }
            }
            cout<<"number:"<<count;
        }
};
int  main()
{
    pattern obj;
    obj.func();
}