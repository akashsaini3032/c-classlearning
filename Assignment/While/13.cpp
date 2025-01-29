// Find the count of digits in a user-input number that divide the number itself :
#include <iostream>
using namespace std;
int main()
{
    int digit;
    int num;
    cout << "enter num";
    cin >> num;
    int cpy = num;
    int count = 0;
    while (num != 0)
    {
        digit = num % 10;
        if (cpy % digit == 0)
        {
            count++;
        }
        num = num / 10;
    }

    cout << count;
}