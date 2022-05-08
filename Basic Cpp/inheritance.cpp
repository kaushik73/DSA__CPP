#include <iostream>
using namespace std;

class Animal
{
public:
    int age;
    int weight;

    void speak()
    {
        cout << " Animal Speaking" << endl;
    }
};

class Human
{
public:
    int speed;
    void run()
    {
        cout << "Human Running" << endl;
    }
};
class Dog : public Animal
{
public:
    int speed;
    void DogBark()
    {
        cout << "DogBark" << endl;
    }
};

class GermanShepard : public Dog // multilevel
{
};

class A : public Animal, public Human // multiple
{
};
int main()
{
    Dog d1;
    cout << d1.weight << endl;
    cout << d1.speed << endl;
    A a1;
    a1.run();
    a1.speak();
    cout << a1.age << a1.weight << a1.speed << endl;
}