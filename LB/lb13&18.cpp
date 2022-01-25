// Kadane's Algorithm
// Given an array Arr[] of N integers. Find the contiguous sub-array(containing at least one number) which has the maximum sum and return its sum.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {-4, -7, -5, -6, -5, -2, -4};
    int len = sizeof(arr) / sizeof(arr[0]);
    cout << len << endl;
    int max_till_here = 0;
    int maxx = INT_MIN;
    for (int i = 0; i < len; i++)
    {

        max_till_here += arr[i];
        if (max_till_here > maxx)
        {
            maxx = max_till_here;
        }
        if (max_till_here < 0)
        {
            max_till_here = 0;
        }
    }
    cout << "Largest sum contiguou subarray : " << maxx;
}