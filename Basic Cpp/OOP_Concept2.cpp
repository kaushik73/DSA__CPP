#include <iostream>
using namespace std;

class Hero
{
    int health;
    char level;

public:
    void sethealth(int h){this->health = h;}
    int gethealth() { return health; }

    Hero(){
        cout<<"Parameter less const. called\n";

    }
    Hero(int health, int level)
    {
        this->health = health;
        this->level = level;
    }
    void print(){
        cout<<"Health : "<<this->health<<endl;
        cout<<"Level : "<<this->level<<endl;
    }
};

int main()
{
    Hero R(70,'A');
    R.print();
    // Copy Constructor  Copying values of R to S
    // like R.health = S.health;
    Hero S(R);
    S.print();

    Hero A;
    A.sethealth(R.gethealth());
    A.print();

}