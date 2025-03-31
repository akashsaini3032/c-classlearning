#include <iostream>
using namespace std;
void  palindrome(int number)
    int number=340;
    int rv=0;
    int cpy=number;
    while(number!=0)
    {
    rv=rv*10+number%10;
    number/10;
    
    if(rv==cpy)
    
    {
        cout<<"Pallindrome";
    }
    else
    {
        cout<<"not ";
        break;
    }
    }

int main()
{
    int number=340
    palindrome(number)
    

    return 0;
}