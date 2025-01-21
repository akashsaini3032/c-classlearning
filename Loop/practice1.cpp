#include <iostream>

using namespace std;

void fibonaci(int n) {
    int ft = 0;
    int st = 1;
    for (int i = 0; i < n; ++i) {
        if (i == 0) {
            cout << ft << endl;
            continue;
        }
        if (i == 1) {
            cout << st << endl;
            continue;
        }
        int next = ft + st;
        ft = st;
        st = next;
        cout << next << endl;
    }
}

int main() {
    int n = 5;
    fibonaci(n);
    return 0;
}