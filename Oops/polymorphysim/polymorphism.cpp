//Polymorphism means many forms 
//function ,operator,object
// see image for beter understanding

//function
//function overloadiong
using namespace std;

class one 
{
    public:void show()
    {
        cout<<"i am show1";
    }
    public:void show(int a)
    {
        cout<<a;
    }
};
int main()
{
    one obj;
    obj.show(10);
    obj.show();
}

//function overloadind explanation
#include <iostream> // Step 1: Ye header file include hoti hai, jisse input aur output operations ke liye iostream library use hoti hai
using namespace std; // Step 2: Ye line standard namespace use karti hai, taaki std:: likhne ki zaroorat na ho

class one // Step 3: 'one' naam ki class define hoti hai
{
    public:
    void show() // Step 4: Class ke andar 'show' naam ka function define hota hai jo koi argument nahi leta
    {
        cout << "i am show1"; // Step 5: Ye function "i am show1" text output karta hai
    }

    public:
    void show(int a) // Step 6: Ek aur 'show' function define hota hai jo integer argument 'a' leta hai (function overloading)
    {
        cout << a; // Step 7: Ye function integer value 'a' ko output karta hai
    }
};

int main() // Step 8: Program execution main() function se start hota hai
{
    one obj; // Step 9: 'one' class ka ek object 'obj' create hota hai
    
    obj.show(10); // Step 10: 'show' function call hota hai aur '10' argument pass hota hai, to "10" output hota hai
    obj.show(); // Step 11: 'show' function bina argument ke call hota hai, to "i am show1" output hota hai
    
    return 0; // Step 12: Program successful execution ko indicate karta hai aur program exit hota hai
}

// Code Execution Order:
// 1. Program execution start hota hai 'main()' function se.
// 2. 'one' class ka object 'obj' create hota hai.
// 3. 'obj.show(10);' call hota hai aur integer value '10' output hoti hai.
// 4. 'obj.show();' call hota hai aur string "i am show1" output hota hai.
// 5. 'return 0;' program successful execution ko indicate karta hai aur program exit hota hai.


//operators
//operator overloading
using namespace std;
class one
{
    public:int value;
    public:one(int x=0)
    {
        value=x;
    }
    one add(one obj)
    {
        one temp;
        temp.value=value+obj.value;
        return temp;
    }

};
int main()
{
    one obj1(10);
    one obj2(20);
    one obj3;
    obj3=obj1.add(obj2);
    cout<<obj3.value;
}

//operator overloading explanation
#include <iostream> // Step 1: Ye header file include hoti hai, jisse input aur output operations ke liye iostream library use hoti hai
using namespace std; // Step 2: Ye line standard namespace use karti hai, taaki std:: likhne ki zaroorat na ho

class one // Step 3: 'one' naam ki class define hoti hai
{
    public:
    int value; // Step 4: 'value' naam ka ek public integer member variable define hota hai
    
    public:
    one(int x=0) // Step 5: Constructor define hota hai jo default value '0' assign karta hai
    {
        value = x; // Step 6: Member variable 'value' ko 'x' ki value assign hoti hai
    }
    
    one add(one obj) // Step 7: 'add' function define hota hai jo ek 'one' type ka object argument leta hai
    {
        one temp; // Step 8: Temporary 'one' type ka object 'temp' create hota hai
        temp.value = value + obj.value; // Step 9: 'temp.value' ko do objects ki 'value' ko add karke assign hoti hai
        return temp; // Step 10: Temporary object 'temp' return hota hai
    }
};

int main() // Step 11: Program execution main() function se start hota hai
{
    one obj1(10); // Step 12: 'one' class ka ek object 'obj1' create hota hai aur uski 'value' 10 set hoti hai
    one obj2(20); // Step 13: 'one' class ka ek object 'obj2' create hota hai aur uski 'value' 20 set hoti hai
    one obj3; // Step 14: 'one' class ka ek object 'obj3' create hota hai (default value '0' set hoti hai)
    
    obj3 = obj1.add(obj2); // Step 15: 'obj1' ka 'add' function call hota hai aur 'obj2' argument pass hota hai. Ye 'add' function 'temp' object return karta hai jisme 'value' 30 hoti hai, aur 'obj3' ki 'value' 30 set hoti hai
    
    cout << obj3.value; // Step 16: 'obj3' ki 'value' (jo ki 30 hai) output hoti hai

    return 0; // Step 17: Program successful execution ko indicate karta hai aur program exit hota hai
}

// Code Execution Order:
// 1. Program execution 'main()' function se start hota hai.
// 2. 'one' class ka object 'obj1' create hota hai aur uski value 10 set hoti hai.
// 3. 'one' class ka object 'obj2' create hota hai aur uski value 20 set hoti hai.
// 4. 'one' class ka object 'obj3' create hota hai (default value 0 set hoti hai).
// 5. 'obj1.add(obj2);' call hota hai aur 'obj1' ki value aur 'obj2' ki value ko add karta hai, result 'temp' object mein store hota hai jisme value 30 hoti hai.
// 6. 'temp' object ko 'obj3' ko assign kiya jata hai jisse 'obj3' ki value 30 ho jati hai.
// 7. 'cout << obj3.value;' execute hota hai aur 'obj3' ki value (jo ki 30 hai) output hoti hai.
// 8. 'return 0;' program successful execution ko indicate karta hai aur program exit hota hai.


//OBJECT
//object overwriting
using namespace std;
class hq
{
    public:virtual void show()=0;
};
class bhopal:public hq
{
    public:void show()
    {
        cout<<"price 16000rs";
    }
};
class delhi:public hq
{
    public:void show()
    {
        cout<<"price 18000rs";
    }
};

int main()
{
    hq *obj=new bhopal();
    obj->show();
}

//object overridding explanation


#include <iostream> // Step 1: Ye header file include hoti hai, jisse input aur output operations ke liye iostream library use hoti hai
using namespace std; // Step 2: Ye line standard namespace use karti hai, taaki std:: likhne ki zaroorat na ho

class hq // Step 3: 'hq' naam ki abstract class define hoti hai
{
    public:
    virtual void show() = 0; // Step 4: Pure virtual function 'show' declare hota hai, jo derived classes me define hoga
};

class bhopal : public hq // Step 5: 'hq' class ko inherit karke 'bhopal' class define hoti hai
{
    public:
    void show() // Step 6: 'bhopal' class me 'show' function define hota hai
    {
        cout << "price 16000rs"; // Step 7: Ye function "price 16000rs" output karta hai
    }
};

class delhi : public hq // Step 8: 'hq' class ko inherit karke 'delhi' class define hoti hai
{
    public:
    void show() // Step 9: 'delhi' class me 'show' function define hota hai
    {
        cout << "price 18000rs"; // Step 10: Ye function "price 18000rs" output karta hai
    }
};

int main() // Step 11: Program execution main() function se start hota hai
{
    hq *obj = new bhopal(); // Step 12: 'hq' pointer type ka object 'obj' create hota hai aur 'bhopal' class ka new object allocate hota hai
    
    obj->show(); // Step 13: 'show' function call hota hai jo 'bhopal' class ka 'show' function execute karta hai aur "price 16000rs" output hota hai

    return 0; // Step 14: Program successful execution ko indicate karta hai aur program exit hota hai
}

// Code Execution Order:
// 1. Program execution 'main()' function se start hota hai.
// 2. 'hq' class ka pointer type object 'obj' create hota hai aur 'bhopal' class ka new object allocate hota hai.
// 3. 'obj->show();' call hota hai jo 'bhopal' class ke 'show' function ko execute karta hai aur "price 16000rs" output karta hai.
// 4. 'return 0;' program successful execution ko indicate karta hai aur program exit hota hai.


