// WAP TO FIND SUM OF N NATURAL NUMBERS :
#include <iostream>
using namespace std;
int main()
{
    int n, sum;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << sum;
}