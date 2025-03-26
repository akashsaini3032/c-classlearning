#include <iostream>
using namespace std;

// WAP TO FIND factorial OF N NATURAL NUMBERS :

int main() {
    int n;
    int factorial = 1;
    int i = 1;
    cin >> n;
    do {
        factorial *= i;
        i++;
    } while (i <= n);
    cout << factorial;
    return 0;
}
