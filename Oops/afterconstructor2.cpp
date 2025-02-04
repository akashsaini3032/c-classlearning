#include <iostream>
using namespace std;
class a
{
    public: int g;
    public: a(int x)
    {
        g=x;
    }
    a( a &obj)
    {
        g=obj.g;
        cout<<"i am copy constructor"<<g;
        
    }
};

int main()
{
    a obj(10);
    a obj1(obj);
}