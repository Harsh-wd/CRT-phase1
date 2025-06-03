#include<iostream>
using namespace std;

class arr
{
public:
        void func()
        {
            int arr[3][3];
            int r,c;
            int (*ptr)[3][3]=&arr;
            cout<<"enter elements: \n";
            for(r=0;r<3;r++)
            {
                for(c=0;c<3;c++)
                {
                    cin>>(*ptr)[r][c];
                }
            }
            cout<<"\n----------------"<<endl;
            for(r=0;r<3;r++)
            {
                for(c=0;c<3;c++)
                {
                    if((r+c)%2==0 || (r==1 && c==1))
                    {
                        cout<<(*ptr)[r][c];
                    }
                    else
                    {
                        cout<<" ";
                    }
                    
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