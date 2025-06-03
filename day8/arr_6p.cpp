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
            int (*ptr)[3][3]=&arr;
            int (*ptr1)[3][3]=&brr;
            int (*ptr2)[3][3]=&crr;
            cout<<"enter elements in first : \n";
            for(r=0;r<3;r++)
            {
                for(c=0;c<3;c++)
                {
                    cin>>(*ptr)[r][c];
                }
            }
            cout<<"enter elements in second : \n";
            for(r=0;r<3;r++)
            {
                for(c=0;c<3;c++)
                {
                    cin>>(*ptr1)[r][c];
                }
            }
            cout<<"\n-------sum of array--------"<<endl;
            for(r=0;r<3;r++)
            {
                for(c=0;c<3;c++)
                {
                    (*ptr2)[r][c]=(*ptr)[r][c]+(*ptr1)[r][c];
                    cout<<(*ptr2)[r][c]<<" ";
                    
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