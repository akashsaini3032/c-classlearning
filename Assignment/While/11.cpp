// Reversing a Number :
#include <iostream>
using namespace std;
int main()
{
    int num; // 5674
    int rev = 0;
    cout << "enter num";
    cin >> num;
    while (num != 0)
    {
        rev = rev * 10 + num % 10; // 4765=rev
        num = num / 10;            // 0=num
    }
    cout << rev;
}