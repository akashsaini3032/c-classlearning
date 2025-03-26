// Printing table from 2 to 10 by FOR WHILE LOOP :
#include <iostream>
using namespace std;
int main()
{
    int i = 2;
    while (i <= 10)
    {
        int j = 1;
        while (j <= 10)
        {

            cout << i * j << endl;
            j++;
        }
        i++;
        cout << "\t";
    }
}