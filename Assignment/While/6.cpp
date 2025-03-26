#include <iostream>
using namespace std;

// WAP TO FIND factors OF N NATURAL NUMBERS :

int main() {
    int num;
    cout << "Enter num: ";
    cin >> num;
    int i = 1;
    while (i <= num) {
        if (num % i == 0) {
            cout << i << endl;
        }
        i++;
    }
    return 0;
}