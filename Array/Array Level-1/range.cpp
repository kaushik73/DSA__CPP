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
    int small=9999;
    for (i = 0; i < size; i++){
        if(arr[i] < small){
            small = arr[i];
        }
    }
    cout << "\nSmallest element is : " << small<<endl;
    int large=-9999;
    for (i = 0; i < size; i++){
        if(arr[i] > large){
            large = arr[i];
        }
    }
    cout << "\n Largest element is : " << large<<endl;

cout<<"Range is = "<<large-small<<endl;
}