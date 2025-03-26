#include <iostream>
using namespace std;
// Reversing a Number :
int main() {
    int num;
    int rev = 0;
    cout << "Enter num: ";
    cin >> num;
    for (; num != 0;) {
        rev = rev * 10 + num % 10;
        num = num / 10;
    }
    cout << rev;
    return 0;
}