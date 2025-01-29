#include <iostream>
using namespace std;
// Check whether number is prime or not.
int main() {
    int num;
    cout << "Enter num: ";
    cin >> num;
    int counter = 0;
    int i = 1;
    do {
        if (num % i == 0) {
            counter++;
        }
        i++;
    } while (i <= num);
    if (counter == 2) {
        cout << "Prime";
    } else {
        cout << "Not Prime";
    }
    return 0;
}