// Printing table from 2 to 10 by FOR DO WHILE LOOP :
#include <iostream>
using namespace std;
int main()
{
    int i = 2;
    do
    {
        cout << "Tables :";
        int j = 1;
        do
        {

            cout << i * j << endl;
            j++;
        } while (j <= 10);
        i++;
    } while (i <= 10);
}