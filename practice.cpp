





#include <iostream>
using namespace std;

//uc uppercase lc lower case
void uclc(string &str1)
{
    for(int i=0; i<str1.length(); ++i)
    {
        if(str1[i]>='A' && str1[i]<='Z')
        {
            str1[i] = str1[i] + 32;
        }
        else if(str1[i]>='a' && str1[i]<='z')
        {
            str1[i] = str1[i] - 32;
        }
        
    }
}

int main()
{
    string str1 = "AbCd";
    uclc(str1);
    cout << str1;

    return 0;
}
