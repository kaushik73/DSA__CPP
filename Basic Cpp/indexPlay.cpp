#include <iostream>
using namespace std;

int main()
{
    const int n = 6;
    int arr[n] = {2, 3, 4, 5, 6, 7};

    cout << sizeof(arr) << endl; // -> 6*4
    cout << arr[n] << endl;
    cout << arr[n - 1] << endl;
    cout << "Concept for String: " << endl;
    string str("kaushi");
    cout << sizeof(str) << endl;
    cout << "str[n] : " << str[n] << endl;
    cout << str[n - 1] << endl;
    cout << endl;
}