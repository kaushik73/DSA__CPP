#include <iostream>
#include <string>
#include "tempclass1.cpp" //class kaushik is also included in this file
using namespace std;

class kaushik1
{

    int marks;     // real size 4
    char game;     // real size 1 but with padding (8-4-1) real size of marks + game = 8
    double salary; // size 8
    char game2;    // real size =1 bu padding =7 so size =8

public:
    // Getter and setter methods
    int getmarks() { return marks; }
    void setmarks(int m) { marks = m; }
    void print()
    {
        cout << "Marks using print function : " << marks << endl;
    }
    // default constructor, inbuilt delete ho gaya
    kaushik1()
    {
        cout << "Object created" << endl;
    }

    // parameterized constructor
    kaushik1(int m)
    {
        // here marks is property of object that is created of kaushik class
        this->marks = m;
        cout << "this is : " << this << endl;
    }
};

int main()
{
    // created k1 statically
    kaushik1 k1(10);
    cout << "size : " << sizeof(k1) << endl;
    // k1.marks = 23; // as marks is private cannot be accessed outside the class
    k1.setmarks(23);
    cout << "Marks of k1 : " << k1.getmarks() << endl;
    cout << "address of k1 : " << &k1 << endl;

    // created k2 dynamic_memory
    int *k2 = new int;
    *k2 = 34;
    cout << "k2 is : " << *k2 << endl;

    // //Dynamic
    cout << "Dynamically created a variable" << endl;
    kaushik1 *b = new kaushik1(10);
    cout << "Address of b : " << b << endl;
    kaushik1 *b1 = new kaushik1;
    b->setmarks(23);
    cout << "Marks of dynamically created object : " << b->getmarks();
    // OR                      b->print();
}