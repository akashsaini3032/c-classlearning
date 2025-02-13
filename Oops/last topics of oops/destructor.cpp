#include <iostream>
using namespace std;
//destructor
class one
{
    int *ptr;
    public:one()
    {
        ptr=new int;
        cout<<"i am constructor";
    }
    ~one()
    {
        delete ptr;
        cout<<" if this show means it delete ";

    }
};
int main()
{
    one obj;
}

