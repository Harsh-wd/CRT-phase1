#include<iostream>
using namespace std;

class Binary
{
public:
        void func()
        {
            int arr[10],i,count=0,s;
            int lb=0,ub=9,mid;

            cout<<"enter elements in array\n";
            for(i=0;i<10;i++)
            {
                cin>>arr[i];
            }
            cout<<"enter searching element"<<endl;
            cin>>s;

            //searching
            while(lb<=ub)
            {
                mid=(lb+ub)/2;
                if(arr[mid]==s)
                {
                    count++;
                    break;
                }
                else if(s< arr[mid])
                {
                    ub=mid-1;
                }
                else if(s>arr[mid])
                {
                    lb=mid+1;
                }
            }
            if(count>0)
            {
                cout<<"found"<<endl;
            }
            else{
                cout<<"not found"<<endl;
            }
        }
};
int main()
{
    Binary obj;
    obj.func();
}