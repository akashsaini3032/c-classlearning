#include <iostream>
using namespace std;
//try and catch
//exception handling
int main()
{
    int number1=120;
    int number2=0;

    try{
        if(number2!=0)
        cout<<number1/number2;
        else throw number2;
    }

    catch(int e)
    {
        cout<<"number 2 is not correct"<<e;
    }
}