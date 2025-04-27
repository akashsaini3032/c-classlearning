#include <iostream>

using namespace std;

long long calculateFactorial(int n) {
    long long factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    return factorial;
}

int main() {
    int n;
    cin >> n;
    long long factorial = calculateFactorial(n);
    cout << factorial;
    return 0;
}

