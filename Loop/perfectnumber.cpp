#include <iostream>
using namespace std;

int main()
{
    //perfect number 
    int number=28;
    int sum=0;
    
    for(int i=1;i<number;++i)
    {
        if(number%1==0)
        {
            sum=sum+i;
        }
    }
    
    if(sum==number)
    {
        cout<<"perfect";
    }
    
    else
    {
        cout<<"no";
    }
    
}