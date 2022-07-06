#include <iostream>
using namespace std;

class Base
{
public:
    Base()
    {
        cout << "\nBase constructor";
    }

    void show()
    {
        cout << "\nBase  class show() method called";
    }
};

class Derived : public Base
{
public:
    Derived() : Base() // adding Base class constructor too
    {
        cout << "\nDerived constructor";
    }

    void show()
    {
        cout << "\nDerived class show() method called";
        Base::show(); // calling base class show function too
    }
};

int main()
{
    Derived d;
    //  Here, d is an object of the Derived class, and the method show() is overridden in the derived class. So the run time polymorphism happens, and derived fun() is called.
    d.show();
    d.Base::show();
    cout << "\nNew\n";
    Derived temp;
    temp.show();

    // temp runner
}