#include <iostream>
using namespace std;
// WAP TO FIND power of any number :
int main() {
    int num;
    int power;
    int result = 1;
    int i = 1;
    cout << "Enter num: ";
    cin >> num;
    cout << "Enter power: ";
    cin >> power;
    do {
        result = result * num;
        i++;
    } while (i <= power);
    cout << result;
    return 0;
}