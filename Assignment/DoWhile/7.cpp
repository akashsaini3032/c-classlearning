#include <iostream>
using namespace std;

// WAP TO FIND factors OF N NATURAL NUMBERS :

int main() {
    int num;
    cout << "Enter num: ";
    cin >> num;
    int i = 1;
    do {
        if (num % i == 0) {
            cout << i << endl;
        }
        i++;
    } while (i <= num);
    return 0;
}