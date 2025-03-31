#include <iostream>
using namespace std;
// static method 1
class one
{
    public:
    static void show (int a)
    {
        cout<<a;
    }
};
int main()
{
    one::show(112);
}

// static method 2
class one
{
    public: static int a;
};
int one ::a=10;
int main()
{
    cout<<one::a;
}


