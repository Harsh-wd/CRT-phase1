#include<iostream>
using namespace std;
class college
{
private:
        int notes;
public:
        college()
        {
            notes=10;
        }
        friend int dost(college id);
};
int dost(college id)
{
    return id.notes;
}
int main()
{
    college id;
    cout<<dost(id);
}