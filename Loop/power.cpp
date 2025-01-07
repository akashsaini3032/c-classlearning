#include <iostream>
using namespace std;

int main()
{
    //power
    int number=5;
    int power=3;
    int ans=1;
    
    for(int i=1;i<=power;++i)
    {
        ans=ans*number;
    }
    
    cout<<ans;
    
    
}