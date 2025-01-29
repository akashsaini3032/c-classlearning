#include <iostream>
using namespace std;
// WAP to print all prime numbers in a given range :
int main() {
    int rangeS;
    int rangeE;
    cout << "Enter ranges: ";
    cin >> rangeS >> rangeE;
    int num = rangeS;
    do {
        if (num > 1) {
            int count = 0;
            int i = 2;
            do {
                if (num % i == 0) {
                    count++;
                }
                i++;
            } while (i * i <= num);
            if (count == 0) {
                cout << num;
            }
        }
        num++;
    } while (num <= rangeE);
    return 0;
}
