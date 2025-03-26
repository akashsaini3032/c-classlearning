#include <iostream>

# include <cmath>
using namespace std;

int main()
{
    //GP GEOMETRIC progression
    
    int a=1;
    int n=5;
    int r=3;
    int term=0;
    
    for(int i=1;i<=n;++i)
    {
        term= a * pow(r,(n-1));
    }
    
    cout<<term;
    
    
    
}


    
    
    
    
