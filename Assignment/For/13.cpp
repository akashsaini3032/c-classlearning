#include <iostream>
using namespace std;
// Find the count of digits in a given number :
int main() {
    int num;
    int count = 0;
    cout << "Enter num: ";
    cin >> num;
    for (; num != 0;) {
        num = num / 10;
        count++;
    }
    cout << count;
    return 0;
}