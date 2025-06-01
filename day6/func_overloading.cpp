#include<iostream>
using namespace std;

class JECRC
{
public:
        void btech()
        {
            cout<<"Btech from CS"<<endl;
        }
        void btech(int account)
        {
            cout<<"mtech form ece"<<account<<endl;
        }
        void btech(int x,float y)
        {
            cout<<"btech form mech"<<endl;
        }
        void btech(float a,int b) ////here datatypes matter not diff. variables
        {
            cout<<"civil"<<endl;
        }
};
int main()
{
    JECRC con;
    con.btech(1500);
    con.btech();
    con.btech(10,20.5);
    con.btech(20.2,10);
    
}