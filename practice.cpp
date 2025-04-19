// first 

#include <iostream>
class a
{
    int g;
    public: a(int x)
    {
        g=x;
    }
};
int main()
{
    a obj(10);
}


#include <iostream>
using namespace std;
class a
{
    int g;
    public: a()
    {
        cout<<"i am constructor";
    }
};
int main()
{
    a obj;
}



