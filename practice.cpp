
////7 Reversing a Number :

#include <iostream>

using namespace std;

int reverseNumber(int num) {
    int rev = 0;
    while (num != 0) {
        rev = rev * 10 + num % 10;
        num = num / 10;
    }
    return rev;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int rev = reverseNumber(num);
    cout << "Reversed Number: " << rev;
    return 0;
}


//8ARMSTRONG NUMBER :
#include <iostream>

using namespace std;

bool isArmstrongNumber(int num) {
    int sum = 0;
    int cpy = num;
    while (num != 0) {
        int digit = num % 10;
        sum += digit * digit * digit;
        num = num / 10;
    }
    return cpy == sum;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isArmstrongNumber(num)) {
        cout << "Armstrong";
    } else {
        cout << "No";
    }
    return 0;
}