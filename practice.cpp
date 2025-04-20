
#include <iostream>
using namespace std;

// after concept 3 image see then see this code
//hybrid inherintance
class A
{
    public:
         int p=10;
         A()
         {
             cout<<"A";
         }
};
class B: virtual public A
{
    public: B()
    {
        cout<<"B";
    }
};
class C: virtual public A
{
    public: C()
    {
        cout<<"C";
    }
};

class D:public C, public B
{
    public: D()
    {
        cout<<"D";
    }
};



int main()
{
    D obj;

    
}




