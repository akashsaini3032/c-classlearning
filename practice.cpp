
    
 
#include <iostream>
using namespace std;
void pallindrome(string &str)
{
    int start=0;
    int end=str.length()-1;
    while(start<end)
    {
        if(str[start]!=str[end])
    {
        cout<<"not pallindrome";
        return;
    }
    start++;
    end--;
    }
    cout<<"pallindrome";
}

int main()
{
    string str="madam";
    pallindrome(str);
    
    
}

 