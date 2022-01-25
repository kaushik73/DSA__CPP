#include <bits/stdc++.h>
using namespace std;
vector<int> find(int arr[], int n, int x)
{
    // SIMPLE CODE O(n) approach

    // vector<int>v;
    //     // code here
    //     for(int i=0;i<n;i++)
    //     {
    //         if(arr[i]==x)
    //         {
    //             v.push_back(i);
    //             break;
    //         }
    //     }

    //     for(int j=n-1;j>0;j--){
    //       if(arr[j]==x)
    //         {
    //             v.push_back(j);
    //             break;
    //         }
    //     }
    //   if(v.empty()){
    //       return {-1,-1};
    //   }
    //   else
    //   {
    //       return v;
    //   }

    //ITERATIVE BINARY SEARCH  O(log n) approach
    int low = 0, high = n - 1;
    int left = -1, right = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == x)
        {
            left = mid - 1;
            right = mid + 1;
            while (left >= low && arr[left] == x)
            {
                left--;
            }
            left = left + 1;
            while (right <= high && arr[right] == x)
            {
                right++;
            }
            right = right - 1;
            break;
        }
        else if (x < arr[mid])
        {
            high = mid - 1;
        }

        else if (x > arr[mid])
        {
            low = mid + 1;
        }
    }
    vector<int> ans;
    ans.push_back(left);
    ans.push_back(right);

    return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int *arr = new int[n];
        int i;
        for (i = 0; i < n; i++)
            cin >> arr[i];
        vector<int> ans;
        ans = find(arr, n, x);
        cout << ans[0] << " " << ans[1] << endl;
    }
    return 0;
}
