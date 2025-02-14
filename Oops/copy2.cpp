#include <iostream>
using namespace std;
//after concept 5
class one
{
    public:int a;
    public:one(int x)
    {
        a=x;
        cout<<a;
    }
    
    public:one(one &obj)
    {
        a=obj.a;
        cout<<a;
    }
};   

int main()
{
    one obj(10);
    one obj1(obj);
    
}

//explanation

#include <iostream> // Step 1: Include the iostream library for input and output operations
using namespace std; // Step 2: Use the standard namespace to avoid prefixing with std::

class one // Step 3: Define the class 'one'
{
    public:
    int a; // Step 4: Declare a public integer member variable 'a'
    
    public:
    one(int x) // Step 5: Define a constructor that takes an integer parameter 'x'
    {
        a = x; // Step 6: Assign the value of 'x' to the member variable 'a'
        cout << a; // Step 7: Print the value of 'a'
    }
    
    public:
    one(one &obj) // Step 8: Define a copy constructor that takes a reference to an object of the same class
    {
        a = obj.a; // Step 9: Assign the value of 'obj.a' to the member variable 'a'
        cout << a; // Step 10: Print the value of 'a'
    }
};   

int main() // Step 11: Start the main function, where program execution begins
{
    one obj(10); // Step 12: Create an object 'obj' of class 'one' and initialize it with value 10 (prints 10)
    one obj1(obj); // Step 13: Create an object 'obj1' of class 'one' using the copy constructor, copying the value from 'obj' (prints 10)
    
    return 0; // Step 14: Indicate successful completion of the program
}

// Code Execution Order:
// 1. Program execution starts from 'main()' function.
// 2. Object 'obj' of class 'one' is created and its constructor is called with argument 10, printing 10.
// 3. Object 'obj1' of class 'one' is created using the copy constructor, copying the value from 'obj', printing 10.
// 4. Program ends with 'return 0;'.

    