
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minJumps(int arr[], int n)
    {
        // Your code here
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i, j;
        cin >> n;
        int *arr = new int[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution obj;
        cout << obj.minJumps(arr, n) << endl;
    }
    return 0;
}