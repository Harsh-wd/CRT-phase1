#include<iostream>
using namespace std;

class arr
{
public:
        void func()
        {
            int arr[3][4];
            int r,c;
            int (*ptr)[3][4]=&arr;
            cout<<"enter elements";
            for(r=0;r<3;r++)
            {
                for(c=0;c<4;c++)
                {
                    cin>>(*ptr)[r][c];
                }
            }
            cout<<"\n----------"<<endl;
            for(r=0;r<3;r++)
            {
                for(c=0;c<4;c++)
                {
                    cout<<(*ptr)[r][c]<<" ";
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