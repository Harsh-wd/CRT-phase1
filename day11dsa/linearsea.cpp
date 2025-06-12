#include<iostream>
using namespace std;
class linear
{       //////////////linear searching//////////
public:
        void func()
        {
            int arr[5];
            int i,s,count=0;
            cout<<"enter elements"<<endl;
            for(i=0;i<5;i++)
            {
                cin>>arr[i];
            }
            cout<<"enter searching element"<<endl;
            cin>>s;

            ///searching///////
            for(i=0;i<5;i++)
            {
                if(arr[i]==s)
                {
                    count++;
                    break;
                }
            }
            if(count>0)
            {
                cout<<"found"<<"\nat index:"<<i<<endl;
            }
            else{
                cout<<"not found"<<endl;
            }
        }
};
int main()
{
    linear obj;
    obj.func();
}