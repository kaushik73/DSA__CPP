#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    // address of arr[0]=1 is 0x61fee8
    // address of arr[1]+1=5 is 0x61fef8
    int a[3][3] = {1, 2, 3, 4 ,5, 6, 7, 8, 9};
    int *p;
    p = a[0];
    //p = &arr[0]; //Error = a value of type "int (*)[3]" cannot be assigned to an entity of type "int *"
    //  p = &arr[0][0];
    cout << "a -> " << a << endl;
    cout << "a[0] -> " << a[0] << endl;
    cout << "p -> " << p << endl;
    cout << "**a -> " << **a << endl;
    cout << "*p -> " << *p << endl;
    cout << "a[1]+1 -> " << a[1]+1 << endl;
    cout << "&a[1]+1 -> " << &a[1]+1 << endl;
    cout<<"Most things are written in copy ";
}