// WAP TO FIND SUM OF N NATURAL NUMBERS :
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, i = 1;
    cin >> n;
    do {
        sum += i;
        i++;
    } while (i <= n);
    cout << sum;
    return 0;
}