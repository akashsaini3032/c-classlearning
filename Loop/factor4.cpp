#include <iostream>

using namespace std;

void pattern(int n) {
    int term = 1;
    for (int i = 1; i <= n; ++i) {
        cout << term << endl;
        term = term * 10 + 1;
    }
}

int main() {
    int n = 5;
    pattern(n);
    return 0;
}