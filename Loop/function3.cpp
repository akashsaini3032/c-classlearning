#include <iostream>
#include <cmath>

using namespace std;

void gp(int a, int r, int n) {
    for (int i = 0; i < n; ++i) {
        int term = a * pow(r, i);
        cout << term << endl;
    }
}

int main() {
    int a = 1;
    int r = 3;
    int n = 5;
    gp(a, r, n);
    return 0;
}
