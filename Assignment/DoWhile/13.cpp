#include <iostream>
using namespace std;
//ARMSTRONG NUMBER :
int main() {
    int num, digit;
    int sum = 0;
    cout << "Enter num: ";
    cin >> num;
    int cpy = num;
    do {
        digit = num % 10;
        sum = sum + digit * digit * digit;
        num = num / 10;
    } while (num != 0);
    if (cpy == sum) {
        cout << "Armstrong";
    } else {
        cout << "No";
    }
    return 0;
}