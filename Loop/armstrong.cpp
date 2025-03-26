#include <iostream>
using namespace std;

int main()
{
    //ARMSTRONG
    int number=123;
    int digit=0;
    int cpy=number;
    int sum=0;
    
    while(number!=0)
    {
        digit=number%10;
        number=number/10;
        sum=sum+digit*digit*digit;
    }
    
    if(sum=cpy)
    {
        cout<<"ARMSTRONG";
    }
    
    else
    {
        cout<<"no";
    }
    

    
    
    
    
}