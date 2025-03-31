// before this see photo of oops
//first
#include <iostream>
using namespace std;
class info
{
    int a=10;
    public:string name;
    int rollno;
    char bg;
};

int main()
{
    info obj;
    obj.name="akash";
    cout<<obj.a;
}


//second

#include <iostream>
using namespace std;
class info
{
    int a=10;
    public:string name;
    int rollno;
    char bg;
};

int main()
{
    info obj="akash";
    cout<<obj.a;
}