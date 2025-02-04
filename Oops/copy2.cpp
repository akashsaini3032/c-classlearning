#include <iostream>
using namespace std;
//after concept 5
class one
{
    public:int a;
    public:one(int x)
    {
        a=x;
        cout<<a;
    }
    
    public:one(one &obj)
    {
        a=obj.a;
        cout<<a;
    }
};   

int main()
{
    one obj(10);
    one obj1(obj);
    
}
    