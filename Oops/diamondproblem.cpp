#include <iostream>
using namespace std;

// after concept 3 image see then see this code
//hybrid inherintance
class A
{
    public:
         int p=10;
         A()
         {
             cout<<"A";
         }
};
class B: virtual public A
{
    public: B()
    {
        cout<<"B";
    }
};
class C: virtual public A
{
    public: C()
    {
        cout<<"C";
    }
};

class D:public C, public B
{
    public: D()
    {
        cout<<"D";
    }
};



int main()
{
    D obj;

    
}

//explanation

#include <iostream> // Step 1: Include the iostream library for input and output operations
using namespace std; // Step 2: Use the standard namespace to avoid prefixing with std::

class A // Step 3: Define the class 'A'
{
    public:
    int p = 10; // Step 4: Declare and initialize a public integer member variable 'p' with value 10
    
    A() // Step 5: Define the constructor for class 'A'
    {
        cout << "A"; // Step 6: Print "A" when the constructor is called
    }
};

class B : virtual public A // Step 7: Define the class 'B' which virtually inherits from class 'A'
{
    public:
    B() // Step 8: Define the constructor for class 'B'
    {
        cout << "B"; // Step 9: Print "B" when the constructor is called
    }
};

class C : virtual public A // Step 10: Define the class 'C' which virtually inherits from class 'A'
{
    public:
    C() // Step 11: Define the constructor for class 'C'
    {
        cout << "C"; // Step 12: Print "C" when the constructor is called
    }
};

class D : public C, public B // Step 13: Define the class 'D' which inherits from class 'C' and class 'B'
{
    public:
    D() // Step 14: Define the constructor for class 'D'
    {
        cout << "D"; // Step 15: Print "D" when the constructor is called
    }
};

int main() // Step 16: Start the main function, where program execution begins
{
    D obj; // Step 17: Create an object 'obj' of class 'D' which calls the constructors in the inheritance hierarchy
    
    return 0; // Step 18: Indicate successful completion of the program
}

// Code Execution Order:
// 1. Program execution starts from 'main()' function.
// 2. Object 'obj' of class 'D' is created which triggers the constructors in the inheritance hierarchy.
// 3. Due to virtual inheritance, the constructor of the base class 'A' is called first, printing "A".
// 4. Then, the constructors of derived classes 'B' and 'C' are called in the order they are inherited, printing "B" and "C" respectively.
// 5. Finally, the constructor of class 'D' is called, printing "D".
// 6. Program ends with 'return 0;'.
