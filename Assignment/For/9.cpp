/// 3 attempt password :
#include <iostream>
using namespace std;
int main()
{
    int psw = 123;
    int u;
    cout << "enter psw"; // 1 display
    cin >> u;
    for (int i = 1; i <= 3; i++)
    {
        if (psw == u)
        {
            cout << "open";
            return 0;
        }
        else
        {
            if (i == 3)
            {

                cout << "blocked";
            }
            else
            {
                cout << "enter again"; //
                cin >> u;
            }
        }
    }
}