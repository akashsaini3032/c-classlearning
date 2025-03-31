#include <iostream>
using namespace std;
void anagram(string str1,string str2)
{
    if(str1.length()!=str2.length())
    {
        cout<<"not";
        return;
    }
    int count[256]={0};
    for(int i=0;i<str1.length();++i)
    {
        count[str1[i]]++;
        count[str2[i]]--;
    }
    for(int i=0;i<256;++i)
    {
        if(count[i]!=0)
        {
            cout<<"not";
            return;
        }
    }
    cout<<"anagram";
}

int main()
{
    string str1="abcde";
    string str2="edcba";
    anagram(str1,str2);
}
    