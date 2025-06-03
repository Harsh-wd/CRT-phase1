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
            cout<<"\n----------Column reverse--------"<<endl;
            for(r=0;r<3;r++)
            {
                for(c=2;c>=0;c--)
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