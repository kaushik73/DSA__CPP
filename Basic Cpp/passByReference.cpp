#include <iostream>
using namespace std;

void update(int n)
{
    n++;
}

void update2(int &n)
{
    n++;
}

void realUpdate(int *ptr ){
        (*ptr)++;
}
int main()
{
    int n = 5;
    cout << " Before n : " << n << endl;
    update(n);
    cout << "After n : " << n << endl<<endl;
    realUpdate(&n);
    cout << "After Real Update n : " << n << endl;
    update2(n);
    cout << "After Reference Passing n : " << n << endl;


}