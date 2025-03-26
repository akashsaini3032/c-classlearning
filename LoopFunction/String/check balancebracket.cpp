#include <iostream>
using namespace std;
void bp(string str)
{
    int curly=0,square=0,circle=0;
    for(int i=0;i<str.length();++i)
    {
        if(str[i]=='[') square++;
        else if(str[i]=='(') circle++;
        else if(str[i]=='{') curly++;
        else if(str[i]=='}') curly--;
        else if(str[i]==')') circle--;
        else if(str[i]==']') square--;
        
    }
    if(circle==0 && square==0 &&curly==0)
    cout<<"balanced";
    
    else cout<<"not";
}

int main()
{
    string str="[({})]";
    bp(str);
}

// iss code me check karenge bracket balanced hai ki nahi matlab koi bracket ka ek part missing to nahi 