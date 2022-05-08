#include <iostream>
#include <string.h>
using namespace std;
class Hero
{
private:
    int health;

public:
    char level;
    char *name;
    static int timetocomplete;
    void sethealth(int h) { this->health = h; }
    int gethealth() { return health; }
    void setname(char nam[]) { strcpy(this->name, nam); }

    Hero()
    {
        cout << "Parameter less constructor called\n";
    }
    Hero(int health, int level)
    {
        this->health = health;
        this->level = level;
        name = new char[100];
    }
    void print()
    {
        cout << endl;
        cout << "[ Name: " << this->name << " ,";
        cout << "health: " << this->health << " ,";
        cout << "level: " << this->level << " ]";
    }

    Hero(Hero &temp)
    {
        this->health = temp.health;
        this->level = temp.level;
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;
    }

    ~Hero()
    {
        cout << "Destroyed!" << endl;
    }
};

int Hero ::timetocomplete = 5; // initialize a static data member
int main()
{
    Hero a;                  // statically created
    Hero *temp = new Hero(); // dynamically created
    delete temp;

    cout << "Static : " << Hero::timetocomplete << endl;
}