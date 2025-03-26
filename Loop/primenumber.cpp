#include <iostream>
using namespace std;

int main()
{
    //prime number
    int number=23;
    int counter=0;
    
    for(int i=1;i<=number;++i)
    {
        if(number%i==0)
        {
            counter++;
        }
    }
    
    if(counter==2)
    {
        cout<<"prime";
    }
    
    else
    {
        cout<<"not prime";
    }
    
}