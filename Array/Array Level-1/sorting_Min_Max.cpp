#include <stdio.h>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int size, i, thsm, thlr, arr[10];
    cout << "Enter Size";
    cin >> size;
    cout << "Enter Elements";
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "\nEntered Array is\n ";
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }

    // Sort the given array

    sort(arr, arr + size);
    cout << "\n Final Array is\n ";
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
// Minimum :-
    cout << "\nEnter th for smallest element : ";
    cin >> thsm;
    cout << arr[thsm - 1];

// Maximim :-
    cout << "\nEnter th for largest element : ";
    cin >> thlr;
    cout << arr[size-thlr];
}