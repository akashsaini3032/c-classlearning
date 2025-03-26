////Check whether number is perfect or not.
#include <iostream>
using namespace std;
int main()
{
    int num, sum;
    cout << "enter num";
    cin >> num;
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            cout << i << endl;
            sum = sum + i;
        }
    }
    if (sum == num)
    {
        cout << "perfect";
    }
    else
    {
        cout << "not perfect";
    }
}


