// Check whether number is prime or not.
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter num";
    cin >> num;
    int counter = 0;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            counter++;
        }
    }
    if (counter == 2)
    {
        cout << "prime";
    }
    else
    {
        cout << "not prime";
    }
}