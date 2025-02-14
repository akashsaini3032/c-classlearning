#include <iostream>
using namespace std;
class a
{
    public: int g;
    public: a(int x)
    {
        g=x;
    }
    a( a &obj)
    {
        g=obj.g;
        cout<<"i am copy constructor"<<g;
        
    }
};

int main()
{
    a obj(10);
    a obj1(obj);
}

//explanation

#include <iostream> // Step 1: Include the iostream library for input and output operations
using namespace std; // Step 2: Use the standard namespace to avoid prefixing with std::

class a // Step 3: Define the class 'a'
{
    public:
    int g; // Step 4: Declare a public integer member variable 'g'
    
    public:
    a(int x) // Step 5: Define a constructor that takes an integer parameter 'x'
    {
        g = x; // Step 6: Assign the value of 'x' to the member variable 'g'
    }
    
    a(a &obj) // Step 7: Define a copy constructor that takes a reference to an object of the same class
    {
        g = obj.g; // Step 8: Assign the value of 'obj.g' to the member variable 'g'
        cout << "i am copy constructor " << g; // Step 9: Print "i am copy constructor " followed by the value of 'g'
    }
};

int main() // Step 10: Start the main function, where program execution begins
{
    a obj(10); // Step 11: Create an object 'obj' of class 'a' and initialize it with value 10
    a obj1(obj); // Step 12: Create an object 'obj1' of class 'a' using the copy constructor, copying the value from 'obj' (prints "i am copy constructor 10")

    return 0; // Step 13: Indicate successful completion of the program
}

// Code Execution Order:
// 1. Program execution starts from 'main()' function.
// 2. Object 'obj' of class 'a' is created and its constructor is called with argument 10.
// 3. Constructor assigns 10 to the member variable 'g' of object 'obj'.
// 4. Object 'obj1' of class 'a' is created using the copy constructor, copying the value from 'obj'.
// 5. Copy constructor assigns the value of 'obj.g' to 'obj1.g' and prints "i am copy constructor 10".
// 6. Program ends with 'return 0;'.
