#include <stdio.h>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int size, i, arr[10];
    cout << "Enter Size";
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
    int find,count = 0;
    cout<< "\nEnter Element for finding occurence : ";
    cin>>find;

    for (i = 0; i < size; i++)
    {
    if(arr[i] ==find){
        count++;
    }
    }

    cout<< "\nNumber of "<<find <<" in given array is : "<<count;

}