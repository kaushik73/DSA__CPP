#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 4, 3, 6, 5, 4, 3};
    int k = 0;
    int dup[23] = {};

    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "size is -> " << size << endl;

    for (int i = 0; i < size-1; i++)
    {
        for (int j = 1; j < size; j++)
        {
            if (i != j)
            {
                if (arr[i] == arr[j])
                {
                    dup[k] = arr[i];
                    k++;
                }
            }
        }
    }
    for (int k = 0; k < 5; k++)
    {
        cout << endl<< dup[k] << endl;
    }
    return 0;
}