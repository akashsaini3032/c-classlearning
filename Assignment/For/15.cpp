// WAP to print all prime numbers in a given range :
#include <iostream>
using namespace std;
int main()
{
    int rangeS;
    int rangeE;
    cout << "enter ranges";
    cin >> rangeS >> rangeE;
    for (int num = rangeS; num <= rangeE; num++)
    {
        if (num > 1)
        {
            int count = 0;
            for (int i = 2; i * i <= num; i++)
            {
                if (num % i == 0)
                {
                    count++;
                }
            }

            if (count == 0)
            {
                cout << num;
            }
        }
    }
}