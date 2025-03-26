// WAP TO FIND power of any number :
#include <iostream>
using namespace std;
int main()
{
    int num;
    int power;
    int result = 1;
    cout << "enter num";
    cin >> num;
    cout << "enter pow";
    cin >> power;
    for (int i = 1; i <= power; i++)
    {
        result = result * num;
    }
    cout << result;
}