// { Driver Code Starts
//Initial function template for C++

#include <bits/stdc++.h>
using namespace std;
#define ll long long

// } Driver Code Ends
//User function template for C++

class Solution
{
public:
    ll findSubarray2(vector<ll> arr, int n)
    {
        unordered_map<int, int> m;
        int psum = 0;
        int res = 0;
        for (int i = 0; i < n; i++)
        {
            psum += arr[i];
            if (m.find(psum) != m.end())
            {
                res += m[psum];
            }
            if (psum == 0) // till that element sum is zero
            {
                res++;
            }
            m[psum]++;
        }
        return res;
    }
    //Function to count subarrays with sum equal to 0.
    ll findSubarray(vector<ll> arr, int n)
    {
        long long cnt = 0, sum = 0;
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
            if (sum == 0 or m[sum])
            {
                // arr[i] -> khud element hi zero hoo
                // sum -> vaha tak ka sum zero ho jaye
                // m[sum] -> hum sum ki jiss value pe abhi hai shyaad vohi value
                // phele aa gayi hoo matlab bich ki values ka sum zero ho raha hai
                cnt++;
                // break;
            }
            else if (arr[i] == 0)
            {
                cnt++;
                cout << "due";
            }
            else
            {
                m[sum] = 1; // har value ki freq. 1 kar rha hu
            }
        }

        return cnt;
    }


    // Not Optimal approach but answer is correct.
    // int cnt=0;
    // for(int i=0;i<n;i++){
    //     int sum=0;
    //     for(int j=i;j<n;j++){
    //         sum = sum+arr[j];
    //         if(sum==0){
    //             cnt++;
    //         }
    //     }
    // }
    // return cnt;
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n; //input size of array

        vector<ll> arr(n, 0);

        for (int i = 0; i < n; i++)
            cin >> arr[i]; //input array elements
        Solution ob;
        cout << ob.findSubarray2(arr, n) << "\n";
    }
    return 0;
} // } Driver Code Ends