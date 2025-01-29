// Palindrome Number :
#include <iostream>
using namespace std;
int main()
{
    int num;
    int rev = 0;
    cout << "enter num";
    cin >> num;
    int cpy = num;

    while (num != 0)
    {
        rev = rev * 10 + num % 10;
        num = num / 10;
    }
    if (rev == cpy)
    {
        cout << "Palindrome Number";
    }
    else
    {
        cout << "Not a Palindrome Number";
    }
}