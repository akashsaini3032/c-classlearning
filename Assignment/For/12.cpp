#include <iostream>
using namespace std;
// Find the count of digits in a user-input number that divide the number itself :
int main() {
    int digit;
    int num;
    cout << "Enter num: ";
    cin >> num;
    int cpy = num;
    int count = 0;
    for (; num != 0;) {
        digit = num % 10;
        if (cpy % digit == 0) {
            count++;
        }
        num = num / 10;
    }
    cout << count;
    return 0;
}