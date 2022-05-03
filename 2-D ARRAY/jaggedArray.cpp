#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter No. of rows: ";
    cin >> n;
    // int *arr  = new int[n];
    // creating 2D array dynamically
    int **arr = new int *[n]; //-> no. of rows
    // -------
    // |*arr  |
    // |*arr  |
    // |*arr  |
    // |*arr  |
    // |*arr  |
    // -------
    int *temp = new int[n];
    for (int i = 0; i < n; i++)
    {
        int m;
        cout << "Enter No. of colm for " << i << " row : ";
        cin >> m;

        arr[i] = new int[m];
        temp[i] = m;
    }

    // Taking input
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < temp[i]; j++)
        {
            cin >> arr[i][j];
        }
    }
    // taking output
    cout<<"\nYour Jagged Array is : \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < temp[i]; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // deleting memory
    for (int i = 0; i < n; i++)
    {
        delete[] arr[i];
    }

    delete[] arr;
}