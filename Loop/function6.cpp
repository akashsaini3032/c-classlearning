#include <iostream>

using namespace std;

bool isPalindrome(int number) {
    int rv = 0;
    int cpy = number;
    while (number != 0) {
        rv = rv * 10 + number % 10;
        number = number / 10;
    }
    return rv == cpy;
}

int main() {
    int number = 121;
    if (isPalindrome(number)) {
        cout << "Palindrome";
    } else {
        cout << "No";
    }
    return 0;
}
