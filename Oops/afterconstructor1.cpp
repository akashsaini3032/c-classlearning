//first
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

//Second

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

//third

#include <iostream>
using namespace std;
class a
{
    int g;
    public: a(int x)
    {
        g=x;
        cout<<g;
    }
};
int main()
{
    a obj(10);
    a obj1;
}


//fourth

#include <iostream>
using namespace std;
class a
{
    public: int g;
    public: a(int x)
    {
        g=x;
    }
};
int main()
{
    a obj(10);
    a obj1(obj);
    cout<<obj1.g;
}