#include<iostream>
using namespace std;

class arr
{
public:
        void func()
        {
            int arr[3][3];
            int brr[3][3];
            int crr[3][3];
            int r,c;
            cout<<"enter elements in first : \n";
            for(r=0;r<3;r++)
            {
                for(c=0;c<3;c++)
                {
                    cin>>arr[r][c];
                }
            }
            cout<<"enter elements in second : \n";
            for(r=0;r<3;r++)
            {
                for(c=0;c<3;c++)
                {
                    cin>>brr[r][c];
                }
            }
            cout<<"\n-------sum of array--------"<<endl;
            for(r=0;r<3;r++)
            {
                for(c=0;c<3;c++)
                {
                    crr[r][c]=arr[r][c]+brr[r][c];
                    cout<<crr[r][c]<<" ";
                    
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