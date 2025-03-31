#include <iostream>

# include <cmath>
using namespace std;

int main()
{
    //  this is use instead of pow in GP GEOMETRIC progression 
    
    int number=2;
    int power=3;
    int ans=1;
    
    for(int i=1;i<=power;++i)
    {
        ans=ans*number;
    }
    
    cout<<ans;
    
    
    
}


    
    
    
    
