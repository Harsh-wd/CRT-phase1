#include<iostream>
using namespace std;

class arr
{
public:
        void func()
        {
            int arr[3][3];
            int r,c;
            
            cout<<"enter elements: \n";
            for(r=0;r<3;r++)
            {
                for(c=0;c<3;c++)
                {
                    cin>>arr[r][c];
                }
            }
            cout<<"\n-------transpose---------"<<endl;
            for(r=0;r<3;r++)
            {
                for(c=0;c<3;c++)
                {
                    cout<<arr[c][r]<<" ";
                    
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