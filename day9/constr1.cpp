#include<iostream>
using namespace std;

class cond
{
public:
        cond()
        {
            cout<<"\n welcome\n";
            btech();
        }
        void btech()
        {
            cout<<"btech\n"<<endl;
            mtech();
        }
        void mtech()
        {
            cout<<"mtech"<<endl;
        }
};
int main()
{
    cond obj;
    

}