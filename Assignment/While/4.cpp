#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, i = 1;
    cin >> n;
    while (i <= n) {
        sum += i;
        i++;
    }
    cout << sum;
    return 0;
}