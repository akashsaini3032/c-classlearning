#include <iostream>
using namespace std;
//deep copy
class one{
    int *a;
    public:one(int x)
    {
        a=new int;
        *a=x;
        cout<<*a;
    }
    public:one(one &obj)
    {
        a=new int;
        *a=*obj.a;
        cout<<*a;
    }
};

int main()
{
    one obj(10);
    one obj1(obj);
}
    

//expanation

#include <iostream> // Step 1: Include the iostream library for input and output operations
using namespace std; // Step 2: Use the standard namespace to avoid prefixing with std::

class one // Step 3: Define the class 'one'
{
    int *a; // Step 4: Declare a private integer pointer member variable 'a'
    
    public:
    one(int x) // Step 5: Define a constructor that takes an integer parameter 'x'
    {
        a = new int; // Step 6: Allocate memory for an integer and assign the address to 'a'
        *a = x; // Step 7: Assign the value of 'x' to the memory location pointed by 'a'
        cout << *a; // Step 8: Print the value stored in the memory location pointed by 'a'
    }
    
    public:
    one(one &obj) // Step 9: Define a copy constructor that takes a reference to an object of the same class
    {
        a = new int; // Step 10: Allocate memory for an integer and assign the address to 'a'
        *a = *obj.a; // Step 11: Assign the value stored in 'obj.a' to the memory location pointed by 'a'
        cout << *a; // Step 12: Print the value stored in the memory location pointed by 'a'
    }
};

int main() // Step 13: Start the main function, where program execution begins
{
    one obj(10); // Step 14: Create an object 'obj' of class 'one' and initialize it with value 10 (prints 10)
    one obj1(obj); // Step 15: Create an object 'obj1' of class 'one' using the copy constructor, copying the value from 'obj' (prints 10)
    
    return 0; // Step 16: Indicate successful completion of the program
}

// Code Execution Order:
// 1. Program execution starts from 'main()' function.
// 2. Object 'obj' of class 'one' is created and its constructor is called with argument 10, printing 10.
// 3. Object 'obj1' of class 'one' is created using the copy constructor, copying the value from 'obj', printing 10.
// 4. Program ends with 'return 0;'.
