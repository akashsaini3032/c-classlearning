#include <iostream>
using namespace std;

int main()
{
    //prime number second method for big numbers
    
    int num=53;
    
    if(num<2)
    {
        cout<<"not a prime";
        return 0;
        
    }
    
    for(int i=2;i*i<num; ++i)
    
    {
        
        if(num%i==0)
        
        {
         cout<<"not a prime";
        return 0;   
        }
        
        
    }
    
    cout<<"prime";

    
}


    
    
    
    
