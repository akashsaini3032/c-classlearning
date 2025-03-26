#include <iostream>
using namespace std;
///Check whether number is perfect or not.
int main() {
    int num, sum = 0;
    cout << "Enter num: ";
    cin >> num;
    int i = 1;
    while (i < num) {
        if (num % i == 0) {
            cout << i << endl;
            sum = sum + i;
        }
        i++;
    }
    if (sum == num) {
        cout << "Perfect";
    } else {
        cout << "Not Perfect";
    }
    return 0;
}