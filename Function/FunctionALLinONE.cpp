//1 WAP TO FIND SUM OF N NATURAL NUMBERS :
#include <iostream>

using namespace std;

int calculateSum(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    int sum = calculateSum(n);
    cout << sum;
    return 0;
}

//2  WAP TO FIND factorial OF N NATURAL NUMBERS :
#include <iostream>

using namespace std;

long long calculateFactorial(int n) {
    long long factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    return factorial;
}

int main() {
    int n;
    cin >> n;
    long long factorial = calculateFactorial(n);
    cout << factorial;
    return 0;
}

//3 WAP TO FIND factors OF N NATURAL NUMBERS :
#include <iostream>

using namespace std;

void printFactors(int num) {
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            cout << i << endl;
        }
    }
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Factors of " << num << " are:" << endl;
    printFactors(num);
    return 0;
}

//4 WAP TO FIND power of any number :
#include <iostream>

using namespace std;

long long calculatePower(int num, int power) {
    long long result = 1;
    for (int i = 1; i <= power; i++) {
        result = result * num;
    }
    return result;
}

int main() {
    int num;
    int power;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Enter power: ";
    cin >> power;
    long long result = calculatePower(num, power);
    cout << "Result: " << result;
    return 0;
}

// 5Check whether number is prime or not.
#include <iostream>

using namespace std;

bool isPrime(int num) {
    int counter = 0;
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            counter++;
        }
    }
    return counter == 2;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isPrime(num)) {
        cout << "Prime";
    } else {
        cout << "Not Prime";
    }
    return 0;
}

//6Check whether number is perfect or not.
#include <iostream>

using namespace std;

bool isPerfectNumber(int num) {
    int sum = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            cout << i << endl;
            sum += i;
        }
    }
    return sum == num;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isPerfectNumber(num)) {
        cout << "Perfect";
    } else {
        cout << "Not Perfect";
    }
    return 0;
}


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

//9 Palindrome Number :
#include <iostream>

using namespace std;

bool isPalindromeNumber(int num) {
    int rev = 0;
    int cpy = num;
    while (num != 0) {
        rev = rev * 10 + num % 10;
        num = num / 10;
    }
    return rev == cpy;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isPalindromeNumber(num)) {
        cout << "Palindrome Number";
    } else {
        cout << "Not a Palindrome Number";
    }
    return 0;
}

//10AP SERIES :
#include <iostream>

using namespace std;

void printAPSeries(int a, int d, int n) {
    for (int i = 0; i < n; i++) {
        int term = a + i * d;
        cout << term << " ";
    }
}

int main() {
    int a = 1;
    int d = 2;
    int n = 7;
    cout << "AP Series: ";
    printAPSeries(a, d, n);
    return 0;
}

///11GP :
#include <iostream>

using namespace std;

void printGP Series(int a, int r, int n) {
    for (int i = 0; i < n; i++) {
        int term = a * pow(r, i);
        cout << term << " ";
    }
}

int main() {
    int a = 2;
    int r = 3;
    int n = 5;
    cout << "GP Series: ";
    printGP Series(a, r, n);
    return 0;
}

//12Fibonacci series :
#include <iostream>

using namespace std;

void printFibonacciSeries(int n) {
    int ft = 0;
    int st = 1;
    for (int i = 0; i < n; ++i) {
        if (i == 0) {
            cout << ft << endl;
            continue;
        }
        if (i == 1) {
            cout << st << endl;
            continue;
        }
        int next = ft + st;
        ft = st;
        st = next;
        cout << next << endl;
    }
}

int main() {
    int n = 5;
    cout << "Fibonacci Series: " << endl;
    printFibonacciSeries(n);
    return 0;
}

//13pattern printing:
#include <iostream>

using namespace std;

void printNumberPattern(int n) {
    int term = 0;
    for (int i = 1; i <= n; i++) {
        term = term * 10 + 1;
        cout << term << endl;
    }
}

// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     printNumberPattern(n);
//     return 0;
// }

