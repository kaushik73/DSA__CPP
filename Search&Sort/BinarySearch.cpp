// Recursive C++ program to reverse a string
#include <bits/stdc++.h>
using namespace std;
//return position of k;
int binary_search(int arr[], int n, int k)
{

    int left = 0, right = n - 1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] == k)
            return mid;
        else if (arr[mid] > k)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
}
int main()
{
    int arr[] = {2, 4, 3, 6, 7, 5, 4, 1, 76, 5, 4, 32, 89, 79, 21, 3, 5, 67, 86, 112, 34, 34, 5, 7, 1};
    // int arr2[5] = {1, 2, 3, 4, 5};
    // int n2 = 5;
    // cout << "arr2[n] : " << arr2[n2]; //invalid n2 is beyond arr2.
    // cout << "\narr2[n-1] : " << arr2[n2 - 1];
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);
    int k;
    cin >> k;

    cout << "Sorted array is : \n";
    for (auto value : arr)
    {
        cout << value << " ";
    }
    cout << "position of k is  : " << binary_search(arr, n, k);
}