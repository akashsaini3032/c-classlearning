// WAP TO FIND factors OF N NATURAL NUMBERS :
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter num";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            cout << i << endl;
        }
    }
}