#include <iostream>
#include <string.h>
using namespace std;
// -> used for pointers
class Hero
{
private:
    int health;

public:
    char level;
    char *name;
    void sethealth(int h) { this->health = h; }
    int gethealth() { return health; }
    void setname(char nam[]) { strcpy(this->name, nam); }

    Hero()
    {
        cout << "Parameter less constructor called\n";
    }
    Hero(int health, int level)
    {
        // cout << "Parameterised constructor called\n";
        this->health = health;
        this->level = level;
        name = new char[100];
    }
    void print()
    {
        // cout<<"print function called";
        cout << endl;
        cout << "[ Name: " << this->name << " ,";
        cout << "health: " << this->health << " ,";
        cout << "level: " << this->level << " ]";
    }

    // Copy Constructor not default
    Hero(Hero &temp) // pass by reference , paas by value karenge too faas jayenge  as agar copy beije temp k toor par too temp copy constructor ko call kaega kyuki temp bhi too copy hai aur temp vapis Hero(copy constructor) ko call kaega jo vapas temp ko too infinite loop chall jayga
    {
        this->health = temp.health; // this keyword is for S
        this->level = temp.level;
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch; // deep copy
    }
};
int main()
{
    Hero R(70, 'A');
    char name[7] = "Babbar";
    // R.print();
    R.setname(name);
    R.print();

    // Hero A;
    // A.sethealth(R.gethealth());

    // default Copy Constructor call hota hai,   Copying values of R to S
    // like R.health = S.health;
    Hero S(R); // OR Hero S = R;
    S.print();

    R.sethealth(20);
    cout << "\n Changing name of R to Gabbar" << endl;
    R.name[0] = 'G'; // shallow copying karta hai default copy constructor
    R.print();
    S.print();

    // Assignment Operator
    cout<<"\nAfter Assignemt Operator\n";
    R = S; // R.health =S.health etc.
    R.print();
    S.print();
}