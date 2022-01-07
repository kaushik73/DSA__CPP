#include <stdio.h>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int size, i, arr[10];
    cout << "Enter Size : ";
    cin >> size;
    cout << "Enter Elements\n";
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "\nEntered Array is :  ";
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }

    int k = -1;

    for (int j = 0; j < size; j++)
    {
        if (arr[j] < 0)
        {
            k++;
            swap(arr[k], arr[j]);
        }
    }

    cout << "\n Final Array is :  ";
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
}