//first
#include <iostream>
class a
{
    int g;
    public: a(int x)
    {
        g=x;
    }
};
int main()
{
    a obj(10);
}

//first explanation

#include <iostream> // Step 1: Include the iostream library for input and output operations

class a // Step 2: Define the class 'a'
{
    int g; // Step 3: Declare a private integer member variable 'g'
    
    public:
    a(int x) // Step 4: Define a constructor that takes an integer parameter 'x'
    {
        g = x; // Step 5: Assign the value of 'x' to the member variable 'g'
    }
};

int main() // Step 6: Start the main function, where program execution begins
{
    a obj(10); // Step 7: Create an object 'obj' of class 'a' and initialize it with value 10

    return 0; // Step 8: Indicate successful completion of the program
}

// Code Execution Order:
// 1. Program execution starts from 'main()' function.
// 2. Object 'obj' of class 'a' is created and its constructor is called with argument 10.
// 3. Constructor assigns 10 to the member variable 'g' of the object 'obj'.
// 4. Program ends with 'return 0;'.


//Second

#include <iostream>
using namespace std;
class a
{
    int g;
    public: a()
    {
        cout<<"i am constructor";
    }
};
int main()
{
    a obj;
}

//second explanation

#include <iostream> // Step 1: Include the iostream library for input and output operations
using namespace std; // Step 2: Use the standard namespace to avoid prefixing with std::

class a // Step 3: Define the class 'a'
{
    int g; // Step 4: Declare a private integer member variable 'g'
    
    public:
    a() // Step 5: Define a default constructor
    {
        cout << "i am constructor"; // Step 6: Print "i am constructor"
    }
};

int main() // Step 7: Start the main function, where program execution begins
{
    a obj; // Step 8: Create an object 'obj' of class 'a', calling the default constructor

    return 0; // Step 9: Indicate successful completion of the program
}

// Code Execution Order:
// 1. Program execution starts from 'main()' function.
// 2. Object 'obj' of class 'a' is created, calling the default constructor.
// 3. Default constructor prints "i am constructor".
// 4. Program ends with 'return 0;'.


//third

#include <iostream>
using namespace std;
class a
{
    int g;
    public: a(int x)
    {
        g=x;
        cout<<g;
    }
};
int main()
{
    a obj(10);
    a obj1;
}

//third explanation

#include <iostream> // Step 1: Include the iostream library for input and output operations
using namespace std; // Step 2: Use the standard namespace to avoid prefixing with std::

class a // Step 3: Define the class 'a'
{
    int g; // Step 4: Declare a private integer member variable 'g'
    
    public:
    a(int x) // Step 5: Define a constructor that takes an integer parameter 'x'
    {
        g = x; // Step 6: Assign the value of 'x' to the member variable 'g'
        cout << g; // Step 7: Print the value of 'g'
    }
};

int main() // Step 8: Start the main function, where program execution begins
{
    a obj(10); // Step 9: Create an object 'obj' of class 'a' and initialize it with value 10 (prints 10)
    a obj1; // Step 10: This line will cause a compilation error because no default constructor is defined

    return 0; // Step 11: Indicate successful completion of the program (this line won't be reached due to the error)
}

// Code Execution Order:
// 1. Program execution starts from 'main()' function.
// 2. Object 'obj' of class 'a' is created and its constructor is called with argument 10.
// 3. Constructor assigns 10 to the member variable 'g' and prints 10.
// 4. Compilation error occurs because 'a obj1;' requires a default constructor which is not defined.
// 5. Program ends abruptly due to the error.



//fourth

#include <iostream>
using namespace std;
class a
{
    public: int g;
    public: a(int x)
    {
        g=x;
    }
};
int main()
{
    a obj(10);
    a obj1(obj);
    cout<<obj1.g;
}

//fourth explanation

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
};

int main() // Step 7: Start the main function, where program execution begins
{
    a obj(10); // Step 8: Create an object 'obj' of class 'a' and initialize it with value 10
    a obj1(obj); // Step 9: Create an object 'obj1' of class 'a' using the copy constructor (implicit default copy constructor)
    cout << obj1.g; // Step 10: Print the value of 'obj1.g' which is 10

    return 0; // Step 11: Indicate successful completion of the program
}

// Code Execution Order:
// 1. Program execution starts from 'main()' function.
// 2. Object 'obj' of class 'a' is created and its constructor is called with argument 10.
// 3. Constructor assigns 10 to the member variable 'g' of object 'obj'.
// 4. Object 'obj1' of class 'a' is created using the copy constructor, copying the value from 'obj'.
// 5. The value of 'obj1.g' (which is 10) is printed.
// 6. Program ends with 'return 0;'.
