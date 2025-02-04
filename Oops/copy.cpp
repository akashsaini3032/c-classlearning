#include <iostream>
using namespace std;

//after concept 5 image
class one
{
    public:int a;
    public:one(int x)
    {
        a=x;
        cout<<a;
    }
};   

int main()
{
    one obj(10);
    one obj1(obj);
    cout<<obj1.a;
}
    