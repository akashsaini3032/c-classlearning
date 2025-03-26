#include <iostream>
using namespace std;
// Palindrome Number :
int main() {
    int num;
    int rev = 0;
    cout << "Enter num: ";
    cin >> num;
    int cpy = num;
    do {
        rev = rev * 10 + num % 10;
        num = num / 10;
    } while (num != 0);
    if (rev == cpy) {
        cout << "Palindrome Number";
    } else {
        cout << "Not a Palindrome Number";
    }
    return 0;
}
