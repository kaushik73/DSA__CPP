// Count pairs with given sum
// Given an array of N integers, and an integer K, find the number of pairs of elements in the array whose sum is equal to K.

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int getPairsCount(int arr[], int n, int k)
    {
        unordered_map<int, int> mp;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            int se = k - arr[i]; //se = second element
            if (mp[se])
            {
                cnt += mp[se]; //mp[se] id frequency.
            }
            mp[arr[i]]++; //++ is increasing frequency.
        }

        return cnt;
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int *arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getPairsCount(arr, n, k);
        cout << ans << "\n";
    }

    return 0;
} // } Driver Code Ends