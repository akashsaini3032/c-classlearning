#include <iostream>
using namespace std;
//structure and 2variables
struct info
{
    string name;
    int roll;
    char bg;
};

int main()
{
    info var;
    var.name="akash";
    var.roll=123;
    var.bg='k';
    
    info v1;
    v1.name="saini";
    v1.roll=33;
    v1.bg='e';
    
    cout<<var.name;
    cout<<v1.name;
    
}