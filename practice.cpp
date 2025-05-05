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
