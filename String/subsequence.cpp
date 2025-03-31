#include <iostream>
using namespace std;
void sub(string str1,string str2)
{
    if(str2.length()==0)
    {
        cout<<"subsequence";
        return;
    }
    int j=0;
    for(int i=0;i<str1.length();++i)
    {
        if(str1[i]==str2[j])
        {
            j++;
        }
    }
    if(j==str2.length())
    {
        cout<<"subsequence";
    }
    else
    {
        cout<<"not";
    }
}

int main()
{
    string str1="Ab34";
    string str2="Ab39";
    sub(str1,str2);
}