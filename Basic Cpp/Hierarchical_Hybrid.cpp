#include <iostream>
using namespace std;
class A
{
public:
    int a;
    void A1()
    {
        printf("This is A class\n");
    }
    void TestAmiguity(){
        cout<<"this is A class Fxn"<<endl;
    }
};

class B : public A
{
public:
    int b;
    void B1()
    {
        printf("This is B clas\n");
    }
};
class D
{
public:
    int d;
    void D1()
    {
        printf("This is D clas\n");
    }
        void TestAmiguity(){
        cout<<"this is D class Fxn"<<endl;
    }
};
class C : public A, public D // hybrid as A -> Hierarchical, D->Multiple
{

public:
    int c;
    void C1()
    {
        printf("This is C clas\n");
    }
};

int main()
{
    B Suresh;
    Suresh.A1();
    Suresh.B1();
    C Ramesh;
    Ramesh.A1();
    Ramesh.C1();
    Ramesh.D1();
    //Ramesh.TestAmiguity(); // TestAmiguity is ambiguous fxn
    Ramesh.A::TestAmiguity(); // inheritance ambiguity resolve
    Ramesh.D::TestAmiguity();

}