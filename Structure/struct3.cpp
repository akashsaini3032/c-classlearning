#include <iostream>
struct info
{
    string name;
    
};

int main()
{
    info a;
    a.name="akash";
    
    info *b=&a;
    cout<<b->name;
}