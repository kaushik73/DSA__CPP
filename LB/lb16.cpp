// Find the Duplicate Number
// Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.
// There is only one repeated number in nums, return this repeated number.
// You must solve the problem without modifying the array nums and uses only constant extra space.
// https://www.youtube.com/watch?v=kV37sZV9pgk

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {2, 6, 3, 2, 4, 8, 9, 1, 7, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    // int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        arr[arr[i] % n] = arr[arr[i] % n] + n; // yaha pe jaise hum i=1 pe hai too arr[1] = 6, arr[6%10]     i.e. arr[6] mai add ho jayga n=10;
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] / n > 1)
        {
            cout << "repeated number is :  " << i;
        }
    }
}
