//ARMSTRONG NUMBER :
#include <iostream>
using namespace std;
int main()
{
    int num, digit; // 153
    int sum = 0;
    cout << "enter num";
    cin >> num;
    int cpy = num;
    while (num != 0)
    {
        digit = num % 10;                  // 1
        sum = sum + digit * digit * digit; // 153
        num = num / 10;                    // 0
    }
    if (cpy == sum)
    {
        cout << "armstrong";
    }
    else
    {
        cout << "no";
    }
}