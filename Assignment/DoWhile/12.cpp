#include <iostream>
using namespace std;
// Reversing a Number :
int main() {
    int num;
    int rev = 0;
    cout << "Enter num: ";
    cin >> num;
    do {
        rev = rev * 10 + num % 10;
        num = num / 10;
    } while (num != 0);
    cout << rev;
    return 0;
}