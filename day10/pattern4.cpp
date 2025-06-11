#include<iostream>
using namespace std;

class pattern
{
public:
        void func()
        {
            int arr[3][3];
            int r,c;
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
                    if((r+c)>=2)
                    {
                        cout<<arr[r][c]<<"  ";
                    }
                    else
                    {
                        cout<<"    ";
                    }
                }
                cout<<"\n";
            }
        }
};
int  main()
{
    pattern obj;
    obj.func();
}