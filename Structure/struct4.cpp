//after concept3
#include <iostream>
using namespace std;
//self referential structure
struct info
{
    string name;
    struct info *link;
};

int main()
{
    info s1;
    info s2;
    
    s1.link=NULL;
    s1.name="akash";
    
    s2.link=NULL;
    s2.name="saini";
    
    s2.link=&s1;
    cout<<s2.link->name;
}