#include <iostream>
using namespace std;

int main()
{
    //password
    int a=1234;
    int pass;
    int block;
    
    cout<<"enter your pass";
    cin>>pass;
    
    for(int i=1;i<3;++i)
    {
        if(pass==a)
        {
            cout<<"open";
            return 0;
        }
        
        else
        {
            cout<<"enter your pass";
            cin>>pass;
            if(1==2)
            { cout<<"block";}
        }
    }
    
    
    
}


    
    
    
    
