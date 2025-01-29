#include <iostream>
using namespace std;
// 3 attempt password :
int main() {
    int psw = 123;
    int u;
    int i = 1;
    cout << "Enter psw: ";
    cin >> u;
    while (i <= 3) {
        if (psw == u) {
            cout << "Open";
            return 0;
        } else {
            if (i == 3) {
                cout << "Blocked";
            } else {
                cout << "Enter again: ";
                cin >> u;
            }
        }
        i++;
    }
    return 0;
}