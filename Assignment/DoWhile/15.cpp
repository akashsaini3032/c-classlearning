#include <iostream>
using namespace std;
// Find the count of digits in a given number :
int main() {
    int num;
    int count = 0;
    cout << "Enter num: ";
    cin >> num;
    do {
        num = num / 10;
        count++;
    } while (num != 0);
    cout << count;
    return 0;
}