#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {0};
    int pos, size;
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

    cout << "\nEnter position to be deleted : ";
    cin >> pos;

    for (int i = pos - 1; i < size; i++)
    {

        arr[i] = arr[i + 1];
    }
    size--;
    cout << "Final Arrays" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
}