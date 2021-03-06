// Merge Without Extra Space
// Given two sorted arrays arr1[] of size N and arr2[] of size M. Each array is sorted in non-decreasing order. Merge the two arrays into one sorted array in non-decreasing order without using any extra space.

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void merge(int arr1[], int arr2[], int n, int m)
    {
        int i = n - 1, j = 0;
        while (i >= 0 && j < m)
        {
            if (arr1[i] > arr2[j])
            {
                int temp = arr1[i];
                arr1[i] = arr2[j];
                arr2[j] = temp;
                i--;
                j++;
            }
            else
                break;
        }
        sort(arr1, arr1 + n);
        sort(arr2, arr2 + m);
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, i;
        cin >> n >> m;
        int *arr1 = new int[n];
        int *arr2 = new int[m];
        for (i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        for (i = 0; i < m; i++)
        {
            cin >> arr2[i];
        }
        Solution ob;
        ob.merge(arr1, arr2, n, m);
        for (i = 0; i < n; i++)
        {
            cout << arr1[i] << " ";
        }
        for (i = 0; i < m; i++)
        {
            cout << arr2[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
