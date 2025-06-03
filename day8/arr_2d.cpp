#include<iostream>
using namespace std;

class arr
{
public:
        void func()
        {
            int arr[3][4];
            int r,c;
            cout<<"enter elements";
            for(r=0;r<3;r++)
            {
                for(c=0;c<4;c++)
                {
                    cin>>arr[r][c];
                }
            }
            cout<<"\n----------"<<endl;
            for(r=0;r<3;r++)
            {
                for(c=0;c<4;c++)
                {
                    cout<<arr[r][c]<<" ";
                }
                cout<<"\n";
            }
            
        }
};
int main()
        {
            arr obj;
            obj.func();
        }