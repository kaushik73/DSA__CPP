#include <string>
#include <iostream>
using namespace std;
int main()
{
    int pos, val = 0;
    int arr[10] = {0};
    cout << "Array before insertion\n";
    for (int i = 0; i < 5; i++)
    {
        if (i == 2)
        {
            arr[i] = 9;
        }
        else
        {
            arr[i] = i + 1;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i];
    }
    cout << "\nEnter position";
    cin >> pos;
    cout << "\nEnter value";
    cin >> val;
    
// Increase Array size by one  
    for (int i = 6; i >= pos; i--)
        arr[i] = arr[i - 1];
    ;

    arr[pos - 1] = val;

    cout << "Final array is \n";
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i];
    }
}