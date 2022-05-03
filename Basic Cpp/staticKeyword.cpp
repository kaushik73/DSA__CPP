#include <iostream>
// Singleton class is a class having only one instance
class SingleTon
{

public:
    static SingleTon &Get()
    {
        static SingleTon s_Instance;
        return s_Instance;
    } // there is only one instance of static functions and variables across all instances of class
    void Hellow() {}
};
void Increment()
{
    int i = 0; // The life time of variable is limited to the function scope
    i++;
    std::cout << i << std::endl;
}; // This will increment i to one and when it will reach the end bracket the lifetime of var will get  destroyed
void IncrementStaticVar()
{
    static int i = 0; // The life time of this var is = to program
    i++;
    std::cout << i << std::endl;
} // This will increment i till the program ends
int main()
{

    Increment();          // output 1
    Increment();          // output 1
    Increment();          // output 1
    IncrementStaticVar(); // output 2
    IncrementStaticVar(); // output 3
    IncrementStaticVar(); // output 4
    IncrementStaticVar(); // output 5
    SingleTon::Get();
    std::cin.get();
}