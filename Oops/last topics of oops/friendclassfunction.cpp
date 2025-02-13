#include <iostream>
using namespace std;
//friend class
class one
{
    int a=11;
    friend class two;
};
class two
{
    public: one obj;
    void show()
    {
        cout<<obj.a;
    }
};
int main()
{
    two obj;
    obj.show();
}

//friend function
class one
{
    int a=11;
    friend void show();
};
void show()
{
    one obj;
    cout<<obj.a;
};
int main()
{
    show();
}



