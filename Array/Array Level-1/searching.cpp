#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {0};
    int num, size;
    bool found = false;
    cout << "Enter size of array :";
    cin >> size;

    cout << "Initial Arrays" << endl;
    for (int i = 0; i < size; i++)
    {
        arr[i] = i + 1;
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << "\nEnter number to be search : ";
    cin >> num;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == num)
            found = true;
    }

    if (found)
    {
        cout << "Element is in  array";
    }
    else
    {
        cout << "Search  complete Not Found";
    }
}