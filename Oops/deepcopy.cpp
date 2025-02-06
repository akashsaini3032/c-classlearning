#include <iostream>
using namespace std;
//deep copy
class one{
    int *a;
    public:one(int x)
    {
        a=new int;
        *a=x;
        cout<<*a;
    }
    public:one(one &obj)
    {
        a=new int;
        *a=*obj.a;
        cout<<*a;
    }
};

int main()
{
    one obj(10);
    one obj1(obj);
}
    