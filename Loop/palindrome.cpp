#include <iostream>
using namespace std;

int main()
{
    //Palindrome
    int number=121;
    int rv=0;
    int cpy=number;
    
    
    while(number!=0)
    {
        rv=rv*10+number%10;
        number=number/10;
    }
    
    if(rv==cpy)
    {
        cout<<"palindrome";
    }
    
    else
    {
        cout<<"no";
    }
    

    
    
    
    
}