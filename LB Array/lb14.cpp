// Minimize the maximum difference between the heights........
// Given heights of n towers and a value k. We need to either increase or decrease the height of every tower by k (only once) where k > 0. The task is to minimize the difference between the heights of the longest and the shortest tower after modifications and output this difference.

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int getMinDiff(int arr[], int n, int k)
    {
        sort(arr, arr + n);
        int diff = arr[n - 1] - arr[0];

        int maxi = arr[n - 1];
        int mini = arr[0];

        for (int i = 1; i < n; i++)
        {
            if (arr[i] - k < 0)
                continue;
            mini = min(arr[0] + k, arr[i] - k);
            maxi = max(arr[n - 1] - k, arr[i - 1] + k);
            diff = min(diff, maxi - mini);
        }
        return diff;
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> k;
        cin >> n;
        int *arr = new int[n];  // ALLOCATING DYANAMIC SIZE TO ARRAY
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}