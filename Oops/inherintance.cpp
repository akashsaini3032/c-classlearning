#include <iostream>
using namespace std;

//inherintance

class A
{
    int a=10;
};
class B:public A
{
    
};
class C:public B
{
    
};
class D:public B,public C
{
    
};
int main()
{
    

    
}

//explanation

#include <iostream> // Step 1: Include the iostream library for input and output operations
using namespace std; // Step 2: Use the standard namespace to avoid prefixing with std::

class A // Step 3: Define the class 'A'
{
    int a = 10; // Step 4: Declare a private integer member variable 'a' and initialize it with value 10
};

class B : public A // Step 5: Define the class 'B' which publicly inherits from class 'A'
{
    // Step 6: No additional members or functions in class 'B'
};

class C : public B // Step 7: Define the class 'C' which publicly inherits from class 'B'
{
    // Step 8: No additional members or functions in class 'C'
};

class D : public B, public C // Step 9: Define the class 'D' which publicly inherits from classes 'B' and 'C'
{
    // Step 10: No additional members or functions in class 'D'
};

int main() // Step 11: Start the main function, where program execution begins
{
    // Note: Object creation is missing here, the code will not demonstrate inheritance or the diamond problem
    
    return 0; // Step 12: Indicate successful completion of the program
}

// Code Explanation:
// 1. Program execution starts from 'main()' function but no objects are created.
// 2. Class 'A' is the base class with a private member variable 'a' initialized to 10.
// 3. Class 'B' inherits publicly from 'A', and class 'C' inherits publicly from 'B'.
// 4. Class 'D' inherits publicly from both 'B' and 'C', creating a potential diamond problem.
// 5. Since no objects are created or functions called in 'main()', the inheritance structure is not utilized.
