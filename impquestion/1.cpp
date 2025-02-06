// ========== Arrays ==========

// Question 1: Find the maximum element in an array
#include <iostream>
#include <vector>
using namespace std;

int findMaxElement(const vector<int>& arr) {
    int maxElement = arr[0];
    for (int i = 1; i < arr.size(); ++i) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }
    return maxElement;
}

// Question 2: Reverse an array
#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int>& arr) {
    int left = 0, right = arr.size() - 1;
    while (left < right) {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}

// Question 3: Find the sum of all elements in an array
#include <iostream>
#include <vector>
using namespace std;

int sumOfElements(const vector<int>& arr) {
    int sum = 0;
    for (int num : arr) {
        sum += num;
    }
    return sum;
}

// Question 4: Check if an array is sorted
#include <iostream>
#include <vector>
using namespace std;

bool isSorted(const vector<int>& arr) {
    for (int i = 1; i < arr.size(); ++i) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}

// Question 5: Merge two sorted arrays
#include <iostream>
#include <vector>
using namespace std;

vector<int> mergeSortedArrays(const vector<int>& arr1, const vector<int>& arr2) {
    vector<int> merged;
    int i = 0, j = 0;
    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] <= arr2[j]) {
            merged.push_back(arr1[i]);
            i++;
        } else {
            merged.push_back(arr2[j]);
            j++;
        }
    }
    while (i < arr1.size()) merged.push_back(arr1[i++]);
    while (j < arr2.size()) merged.push_back(arr2[j++]);
    return merged;
}

// Question 6: Rotate an array by k positions
#include <iostream>
#include <vector>
using namespace std;

void rotateArray(vector<int>& arr, int k) {
    k = k % arr.size();
    reverse(arr.begin(), arr.end());
    reverse(arr.begin(), arr.begin() + k);
    reverse(arr.begin() + k, arr.end());
}

// Question 7: Find the second largest element in an array
#include <iostream>
#include <vector>
using namespace std;

int findSecondLargest(const vector<int>& arr) {
    int largest = INT_MIN, secondLargest = INT_MIN;
    for (int num : arr) {
        if (num > largest) {
            secondLargest = largest;
            largest = num;
        } else if (num > secondLargest && num != largest) {
            secondLargest = num;
        }
    }
    return secondLargest;
}

// Question 8: Count the number of even and odd elements in an array
#include <iostream>
#include <vector>
using namespace std;

pair<int, int> countEvenOdd(const vector<int>& arr) {
    int evenCount = 0, oddCount = 0;
    for (int num : arr) {
        if (num % 2 == 0) evenCount++;
        else oddCount++;
    }
    return {evenCount, oddCount};
}

// Question 9: Find the missing number in an array of size n-1 containing numbers from 1 to n
#include <iostream>
#include <vector>
using namespace std;

int findMissingNumber(const vector<int>& arr, int n) {
    int totalSum = n * (n + 1) / 2;
    int arrSum = 0;
    for (int num : arr) {
        arrSum += num;
    }
    return totalSum - arrSum;
}

// Question 10: Find the intersection of two arrays
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> findIntersection(const vector<int>& arr1, const vector<int>& arr2) {
    unordered_set<int> set(arr1.begin(), arr1.end());
    vector<int> intersection;
    for (int num : arr2) {
        if (set.count(num)) {
            intersection.push_back(num);
        }
    }
    return intersection;
}

// ========== Strings ==========

// Question 1: Check if a string is a palindrome
#include <iostream>
using namespace std;

bool isPalindrome(const string& str) {
    int left = 0, right = str.length() - 1;
    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

// Question 2: Count vowels in a string
#include <iostream>
using namespace std;

int countVowels(const string& str) {
    int count = 0;
    for (char c : str) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || 
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            count++;
        }
    }
    return count;
}

// Question 3: Reverse a string
#include <iostream>
using namespace std;

string reverseString(const string& str) {
    string reversed = str;
    int left = 0, right = str.length() - 1;
    while (left < right) {
        swap(reversed[left], reversed[right]);
        left++;
        right--;
    }
    return reversed;
}

// Question 4: Find the first non-repeating character in a string
#include <iostream>
#include <unordered_map>
using namespace std;

char firstNonRepeatingCharacter(const string& str) {
    unordered_map<char, int> countMap;
    for (char c : str) {
        countMap[c]++;
    }
    for (char c : str) {
        if (countMap[c] == 1) {
            return c;
        }
    }
    return '\0';
}

// Question 5: Check if two strings are anagrams
#include <iostream>
#include <algorithm>
using namespace std;

bool areAnagrams(const string& str1, const string& str2) {
    if (str1.length() != str2.length()) return false;
    string sortedStr1 = str1, sortedStr2 = str2;
    sort(sortedStr1.begin(), sortedStr1.end());
    sort(sortedStr2.begin(), sortedStr2.end());
    return sortedStr1 == sortedStr2;
}

// Question 6: Convert a string to uppercase
#include <iostream>
using namespace std;

string toUpperCase(const string& str) {
    string upperStr = str;
    for (char& c : upperStr) {
        if (c >= 'a' && c <= 'z') {
            c -= 'a' - 'A';
        }
    }
    return upperStr;
}

// Question 7: Find the longest word in a string
#include <iostream>
#include <sstream>
using namespace std;

string findLongestWord(const string& str) {
    istringstream iss(str);
    string word, longestWord;
    while (iss >> word) {
        if (word.length() > longestWord.length()) {
            longestWord = word;
        }
    }
    return longestWord;
}

// Question 8: Count the frequency of characters in a string
#include <iostream>
#include <unordered_map>
using namespace std;

unordered_map<char, int> countCharacterFrequency(const string& str) {
    unordered_map<char, int> frequencyMap;
    for (char c : str) {
        frequencyMap[c]++;
    }
    return frequencyMap;
}

// Question 9: Check if a string contains only digits
#include <iostream>
using namespace std;

bool containsOnlyDigits(const string& str) {
    for (char c : str) {
        if (!isdigit(c)) {
            return false;
        }
    }
    return true;
}

// Question 10: Remove duplicates from a string
#include <iostream>
#include <unordered_set>
using namespace std;

string removeDuplicates(const string& str) {
    unordered_set<char> seen;
    string result;
    for (char c : str) {
        if (!seen.count(c)) {
            seen.insert(c);
            result.push_back(c);
        }
    }
    return result;
}

