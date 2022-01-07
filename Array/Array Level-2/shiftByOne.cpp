#include <stdio.h>
#include <string>
#include <iostream>
// #include <set>

using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    // we want {5,1,2,3,4}
    // int last = arr[4];
    //  cout<<arr[4];
        int last  = arr[4];
    cout << "Original Array " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    for (int i = 4; i >= 0; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[0] = last;

    cout << endl<<"After 1 rotation Array is " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}