// this
#include <iostream>
using namespace std;
class one
{
    public:int a;
    void show(int a)
    {
        this->a=a;
        cout<<this->a;
    }
};
this pointer indicates the instance of current class variable
int main()
{
    one obj;
    obj.show(10);
    cout<<obj.a;
}

