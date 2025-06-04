#include<iostream>
using namespace std;

class cond
{
    public:
        cond()
        {
            cout<<"\n welcome\n";
        }
        void btech()
        {
            cout<<"btech\n"<<endl;
            mtech();
        }
        private:
        void mtech()
        {
            cout<<"mtech"<<endl;
        }
};
int main()
{
    cond obj;
    obj.btech();
    

}