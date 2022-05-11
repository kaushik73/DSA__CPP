#include <bits/stdc++.h>
#include <chrono>
// optimised bubble sort :-
int main()

{
    using namespace std;
    int arr[] = {12, 13, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n - 1; i++) // outer loop for passes
    {
        int flag = 0;
        for (int j = 0; j < n - 1 - i; j++)
        { // inner loop for swapping
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                flag = 1;
            }
        }
        if (flag == 0)
        {
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {

        cout << arr[i] << " ";
    }
}