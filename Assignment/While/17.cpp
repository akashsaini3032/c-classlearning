#include <iostream>
using namespace std;
//AP SERIES :
int main() {
    int a = 1;
    int d = 2;
    int n = 7;
    int term = 0;
    int i = 0;
    while (i < n) {
        term = a + i * d;
        cout << term << " ";
        i++;
    }
    return 0;
}