// C++ implementation of above approach
#include <bits/stdc++.h>
using namespace std;

#define N 3
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
// Function to rotate the matrix 90 degree clockwise
void rotate90AntiClockwise(int a[N][N])
{
    int temp;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(&a[i][j], &a[j][i]); // transpose i.e. i-j swap with j-i
        }
    }

    for (int i = 0; i < N / 2; i++) // row bas adhi hi chale.... puri chalenge too 2 bar ho jayga swap too vo vapas phele jaisa hi ho jayga....
    {
        for (int j = 0; j < N; j++)
        {
            swap(&a[i][j], &a[N - 1 - i][j]); // for 1st and its respective last row swap.
        }
    }
}

// Function for print matrix
void printMatrix1(int arr[N][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            cout << arr[i][j] << " ";
        cout << '\n';
    }
}
void rotate90Clockwise(int a[N][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(&a[i][j], &a[j][i]); // transpose i.e. i-j swap with j-i
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N / 2; j++)
        {
            swap(&a[i][j], &a[i][N - j - 1]); // for 1st and its respective last column swap.
        }
    }
}

// Function for print matrix
void printMatrix(int arr[N][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            cout << arr[i][j] << " ";
        cout << '\n';
    }
}

// Driver code
int main()
{
    int arr1[N][N] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
    };
    int arr2[N][N] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
    };
    cout << "Matrix  is : \n";
    printMatrix1(arr1);
    rotate90AntiClockwise(arr1);
    cout << "AntiClockwise is : \n";
    printMatrix1(arr1);
    cout << "Clockwise is : \n";
    rotate90Clockwise(arr2);
    printMatrix1(arr2);
    return 0;
}
