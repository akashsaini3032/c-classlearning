//AP SERIES :

#include <iostream>
using namespace std;
int main()
{
    int a = 1;
    int d = 2;
    int n = 7;
    int term = 0;
    for (int i = 0; i < n; i++)
    {
        term = a + i * d;
        cout << term << " ";
    }
}