#include<iostream>
using namespace std;

class loop
{
public:
        void func()
        {
            int pri;
            float rate;
            int time;
            double si;
            char ch;

            do
            {
                cout<<"enter principle amount\n";
                cin>>pri;
                cout<<"enter rate of interest\n";
                cin>>rate;
                cout<<"enter time\n";
                cin>>time;
                si=(pri*rate*time)/100;
                cout<<"\nsimple interest"<<si<<endl;

                cout<<"do u want to continue if yes press Y/y"<<endl;
                cin>>ch;
            } while (ch=='Y' || ch=='y');
            
        }
};
int main()
        {
            loop obj;
            obj.func();
        }