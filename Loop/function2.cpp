#include <iostream>
using namespace std;

void ap(int a, int d, int n) {
    for (int i = 0; i < n; ++i) {
        int term = a + i * d;
        cout << term << " ";
    }
}

int main() {
    int a = 1;
    int d = 2;
    int n = 5;
    ap(a, d, n);
    return 0;
}
    

    
    
    
    