#include<iostream>
using namespace std;

class maxi
{
public:
        void func()
        {
            int arr[5];
            int i;
            
            cout<<"enter elements\n";
            for(i=0;i<5;i++)
            {
                cin>>arr[i];
            }
            int count=arr[0];
            for(i=0;i<5;i++){
                if(arr[i]>count){
                    count=arr[i];
                }
            }
            cout<<"largest"<<count;
        }     
};
int main()
{
    maxi obj;
    obj.func();
}